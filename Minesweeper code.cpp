#include <iostream>
#include <utility>
#include <vector>
using namespace std;
 
const int BEGINNER = 0;
const int INTERMEDIATE = 1;
const int ADVANCED = 2;
const int MAXSIDE = 30;
 
int NROWS;
int NCOLUMNS;
int MINES;
 
void chooseDifficultyLevel() {
    int level;
 
    cout << "Enter the Difficulty Level" << endl;
    cout << "Press 0 for BEGINNER     (9  * 9  cells and 10 mines)" << endl;
    cout << "Press 1 for INTERMEDIATE (16 * 16 cells and 40 mines)" << endl;
    cout << "Press 2 for ADVANCED     (16 * 30 cells and 99 mines)" << endl;
 
    cin >> level;
 
    if (level == BEGINNER) {
        NROWS = 9;
        NCOLUMNS = 9;
        MINES = 10;
    }
 
    if (level == INTERMEDIATE) {
        NROWS = 16;
        NCOLUMNS = 16;
        MINES = 40;
    }
 
    if (level == ADVANCED) {
        NROWS = 16;
        NCOLUMNS = 30;
        MINES = 99;
    }
 
    return;
}
 
void clearBoards(char mineBoard[][MAXSIDE], char gameBoard[][MAXSIDE]) {
    for (int i = 0; i < NROWS; i++)
        for (int j = 0; j < NCOLUMNS; j++)
            gameBoard[i][j] = mineBoard[i][j] = '.';
    return;
}
 
void placeMines(char mineBoard[][MAXSIDE], int mines) {
    int placed = 0;
    while (placed < mines) {
        int random = rand() % (NROWS * NCOLUMNS);
        int row = random / NCOLUMNS;
        int col = random % NROWS;
        if (mineBoard[row][col] == '#') continue; // already a mine
        mineBoard[row][col] = '#';
        placed++;
    }
    return;
}
 
// replace the mine in (row, col) and put it to a vacant space
void replaceMine(int row, int col, char mineBoard[][MAXSIDE]) {
    placeMines(mineBoard, 1);  // add a new mine
    mineBoard[row][col] = '.'; // remove the old one
    return;
}
 
char indexToChar(int index) {
    if (index < 10)
        return index + '0';
    else
        return 'a' + (index - 10);
}
 
int charToIndex(char ch) {
    if (ch <= '9')
        return ch - '0';
    else
        return (ch - 'a') + 10;
}
 
void displayBoard(char gameBoard[][MAXSIDE]) {
    // top line
    cout << "    ";
    for (int i = 0; i < NCOLUMNS; i++)
        cout << indexToChar(i) << ' ';
    cout << endl << endl;
 
    // rows
    for (int i = 0; i < NROWS; i++) {
        cout << indexToChar(i) << "   ";
        for (int j = 0; j < NCOLUMNS; j++)
            cout << gameBoard[i][j] << " ";
        cout << "  " << indexToChar(i);
        cout << endl;
    }
 
    // bottom line
    cout << endl << "    ";
    for (int i = 0; i < NCOLUMNS; i++)
        cout << indexToChar(i) << ' ';
    cout << endl;
 
    return;
}
 
bool isValid(int row, int col) {
    return (row >= 0) && (row < NROWS) && (col >= 0) && (col < NCOLUMNS);
}
 
bool isMine(int row, int col, char board[][MAXSIDE]) {
    return (board[row][col] == '#');
}
 
// return vector of all neighbours of row, col
vector < pair <int, int> > getNeighbours(int row, int col) {
    /*
         N.W   N   N.E
           \   |   /
            \  |  /
        W----Cell----E
             / | \
           /   |  \
        S.W    S   S.E
 
        Cell --> Current Cell ( row,   col   )
        N    --> North        ( row-1, col   )
        S    --> South        ( row+1, col   )
        E    --> East         ( row,   col+1 )
        W    --> West         ( row,   col-1 )
        N.E  --> North-East   ( row-1, col+1 )
        N.W  --> North-West   ( row-1, col-1 )
        S.E  --> South-East   ( row+1, col+1 )
        S.W  --> South-West   ( row+1, col-1 )
    */
 
    vector < pair <int, int> > neighbours;
 
    for (int dx = -1; dx <= 1; dx++)
        for (int dy = -1; dy <= 1; dy++)
            if (dx != 0 || dy != 0)
                if (isValid(row+dx, col+dy))
                    neighbours.push_back(make_pair(row+dx, col+dy));
 
    return neighbours;
}
 
// count the number of mines in the adjacent cells
int countAdjacentMines(int row, int col, char mineBoard[][MAXSIDE]) {
    vector < pair <int, int> > neighbours = getNeighbours(row, col);
 
    int count = 0;
    for (int i = 0; i < neighbours.size(); i++)
        if (isMine(neighbours[i].first, neighbours[i].second, mineBoard))
            count++;
 
    return count;
}
 
void uncoverBoard(char gameBoard[][MAXSIDE], char mineBoard[][MAXSIDE], int row, int col, int *nMoves) {
    (*nMoves)++;
    int count = countAdjacentMines(row, col, mineBoard);
    gameBoard[row][col] = count + '0';
 
    // if cell number == 0, then uncover all the neighboring cells. (only uncover if neighbour == '.')
    if (count == 0) {
        vector < pair <int, int> > neighbours = getNeighbours(row, col);
 
        for (int i = 0; i < neighbours.size(); i++)
            if (gameBoard[neighbours[i].first][neighbours[i].second] == '.')
                uncoverBoard(gameBoard, mineBoard, neighbours[i].first, neighbours[i].second, nMoves);
    }
 
    return;
}
 
void markMines(char gameBoard[][MAXSIDE], char mineBoard[][MAXSIDE], bool won) {
    for (int i = 0; i < NROWS; i++) {
        for (int j = 0; j < NCOLUMNS; j++) {
            if (gameBoard[i][j] == '.' && mineBoard[i][j] == '#') {
                if (won) {
                    gameBoard[i][j] = 'F';
                }
                else {
                    gameBoard[i][j] = '#';
                }
            }
        }
    }
}
 
void playMinesweeper() {
    // initialization
    char mineBoard[MAXSIDE][MAXSIDE], gameBoard[MAXSIDE][MAXSIDE];
    int nMovesTotal = NROWS * NCOLUMNS - MINES;
    int flags = MINES;
    clearBoards(mineBoard, gameBoard);
    placeMines(mineBoard, MINES);
 
    // lets play!
    int nMoves = 0;
    bool gameOver = false;
 
    while (!gameOver) {
        displayBoard(gameBoard);
        cout << flags << " flags left" << endl << endl;
 
        // take input
        char x, y, z;
        cout << "Enter your move, (row, column, safe(s)/flag(f)) -> ";
        cin >> x >> y >> z;
        cout << endl;
 
        int row = charToIndex(x);
        int col = charToIndex(y);
 
        if (nMoves == 0)
            if (isMine(row, col, mineBoard))
                replaceMine(row, col, mineBoard);
 
        if (z == 's') {
            if (gameBoard[row][col] == '.' && mineBoard[row][col] == '.') {
                uncoverBoard(gameBoard, mineBoard, row, col, &nMoves);
                if (nMoves == nMovesTotal) {
                    markMines(gameBoard, mineBoard, true);
                    displayBoard(gameBoard);
                    cout << endl << "You won!!! :)" << endl;
                    gameOver = true;
                }
            }
            else if (gameBoard[row][col] == '.' && mineBoard[row][col] == '#') {
                // game over
                gameBoard[row][col] = '#';
                markMines(gameBoard, mineBoard, false);
                displayBoard(gameBoard);
                cout << endl << "You lost! :(" << endl;
                gameOver = true;
            }
            else {
                // illegal move
                cout << "Illegal move. ";
                if (gameBoard[row][col] == 'F')
                    cout << "Cell is a flag. Use f to toggle flag off. ";
                else
                    cout << "Cell is already a number. ";
                cout << endl;
            }
        }
 
        if (z == 'f') {
            if (gameBoard[row][col] == '.') {
                if (flags != 0) {
                    gameBoard[row][col] = 'F';
                    flags--;
                }
                else {
                    cout << "Illegal move. Too many flags!" << endl;
                }
            }
            else if (gameBoard[row][col] == 'F') {
                // undo a flag
                gameBoard[row][col] = '.';
                flags++;
            }
            else {
                // illegal move
                cout << "Illegal move. Cell is a number. " << endl;
            }
        }
    }
 
    return;
}
 
int main() {
    srand(time(NULL));
    chooseDifficultyLevel();
    playMinesweeper();
    return 0;
}
Sample Interaction 1:
Enter the Difficulty Level
Press 0 for BEGINNER     (9  * 9  cells and 10 mines)
Press 1 for INTERMEDIATE (16 * 16 cells and 40 mines)
Press 2 for ADVANCED     (16 * 30 cells and 99 mines)
0
    0 1 2 3 4 5 6 7 8
 
0   . . . . . . . . .   0
1   . . . . . . . . .   1
2   . . . . . . . . .   2
3   . . . . . . . . .   3
4   . . . . . . . . .   4
5   . . . . . . . . .   5
6   . . . . . . . . .   6
7   . . . . . . . . .   7
8   . . . . . . . . .   8
 
    0 1 2 3 4 5 6 7 8
10 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 0 0 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 0 1 . . . . . .   0
1   0 0 1 1 1 1 2 . .   1
2   0 0 0 0 0 0 1 . .   2
3   1 1 1 0 0 0 2 . .   3
4   . . 1 0 0 0 2 . .   4
5   1 1 1 0 0 0 2 . .   5
6   0 0 0 0 0 0 1 . .   6
7   0 0 0 1 1 1 1 . .   7
8   0 0 0 1 . . . . .   8
 
    0 1 2 3 4 5 6 7 8
10 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 0 3 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 0 1 # . . # . .   0
1   0 0 1 1 1 1 2 . #   1
2   0 0 0 0 0 0 1 # .   2
3   1 1 1 0 0 0 2 . .   3
4   . # 1 0 0 0 2 # .   4
5   1 1 1 0 0 0 2 # .   5
6   0 0 0 0 0 0 1 . .   6
7   0 0 0 1 1 1 1 . #   7
8   0 0 0 1 # . . # .   8
 
    0 1 2 3 4 5 6 7 8
 
You lost! :(
Sample interaction 2:
Enter the Difficulty Level
Press 0 for BEGINNER     (9  * 9  cells and 10 mines)
Press 1 for INTERMEDIATE (16 * 16 cells and 40 mines)
Press 2 for ADVANCED     (16 * 30 cells and 99 mines)
0
    0 1 2 3 4 5 6 7 8
 
0   . . . . . . . . .   0
1   . . . . . . . . .   1
2   . . . . . . . . .   2
3   . . . . . . . . .   3
4   . . . . . . . . .   4
5   . . . . . . . . .   5
6   . . . . . . . . .   6
7   . . . . . . . . .   7
8   . . . . . . . . .   8
 
    0 1 2 3 4 5 6 7 8
10 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 0 0 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 . . . . . . .   0
1   0 1 1 . . . . . .   1
2   0 0 1 . . . . . .   2
3   1 1 1 . . . . . .   3
4   . . . . . . . . .   4
5   . . . . . . . . .   5
6   . . . . . . . . .   6
7   . . . . . . . . .   7
8   . . . . . . . . .   8
 
    0 1 2 3 4 5 6 7 8
10 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 0 2 f
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F . . . . . .   0
1   0 1 1 . . . . . .   1
2   0 0 1 . . . . . .   2
3   1 1 1 . . . . . .   3
4   . . . . . . . . .   4
5   . . . . . . . . .   5
6   . . . . . . . . .   6
7   . . . . . . . . .   7
8   . . . . . . . . .   8
 
    0 1 2 3 4 5 6 7 8
9 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 1 3 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F . . . . . .   0
1   0 1 1 1 . . . . .   1
2   0 0 1 . . . . . .   2
3   1 1 1 . . . . . .   3
4   . . . . . . . . .   4
5   . . . . . . . . .   5
6   . . . . . . . . .   6
7   . . . . . . . . .   7
8   . . . . . . . . .   8
 
    0 1 2 3 4 5 6 7 8
9 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 1 4 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 . . . . . .   3
4   . . . . . . . . .   4
5   . . . . . . . . .   5
6   . . . . . . . . .   6
7   . . . . . . . . .   7
8   . . . . . . . . .   8
 
    0 1 2 3 4 5 6 7 8
9 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 3 3 f
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F . . . . .   3
4   . . . . . . . . .   4
5   . . . . . . . . .   5
6   . . . . . . . . .   6
7   . . . . . . . . .   7
8   . . . . . . . . .   8
 
    0 1 2 3 4 5 6 7 8
8 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 4 3 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F . . . . .   3
4   . . . 1 . . . . .   4
5   . . . . . . . . .   5
6   . . . . . . . . .   6
7   . . . . . . . . .   7
8   . . . . . . . . .   8
 
    0 1 2 3 4 5 6 7 8
8 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 5 3 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F . . . . .   3
4   . . . 1 . . . . .   4
5   . . . 1 . . . . .   5
6   . . . . . . . . .   6
7   . . . . . . . . .   7
8   . . . . . . . . .   8
 
    0 1 2 3 4 5 6 7 8
8 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 5 2 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F . . . . .   3
4   . . . 1 . . . . .   4
5   . . 1 1 . . . . .   5
6   . . . . . . . . .   6
7   . . . . . . . . .   7
8   . . . . . . . . .   8
 
    0 1 2 3 4 5 6 7 8
8 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 5 4 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F . . . . .   3
4   . . . 1 . . . . .   4
5   . . 1 1 1 . . . .   5
6   . . . . . . . . .   6
7   . . . . . . . . .   7
8   . . . . . . . . .   8
 
    0 1 2 3 4 5 6 7 8
8 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 4 1 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F . . . . .   3
4   . 1 . 1 . . . . .   4
5   . . 1 1 1 . . . .   5
6   . . . . . . . . .   6
7   . . . . . . . . .   7
8   . . . . . . . . .   8
 
    0 1 2 3 4 5 6 7 8
8 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 4 2 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F . . . . .   3
4   . 1 1 1 . . . . .   4
5   . . 1 1 1 . . . .   5
6   . . . . . . . . .   6
7   . . . . . . . . .   7
8   . . . . . . . . .   8
 
    0 1 2 3 4 5 6 7 8
8 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 5 1 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F . . . . .   3
4   . 1 1 1 . . . . .   4
5   . 2 1 1 1 . . . .   5
6   . . . . . . . . .   6
7   . . . . . . . . .   7
8   . . . . . . . . .   8
 
    0 1 2 3 4 5 6 7 8
8 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 4 0 f
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F . . . . .   3
4   F 1 1 1 . . . . .   4
5   . 2 1 1 1 . . . .   5
6   . . . . . . . . .   6
7   . . . . . . . . .   7
8   . . . . . . . . .   8
 
    0 1 2 3 4 5 6 7 8
7 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 5 0 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F . . . . .   3
4   F 1 1 1 . . . . .   4
5   1 2 1 1 1 . . . .   5
6   . . . . . . . . .   6
7   . . . . . . . . .   7
8   . . . . . . . . .   8
 
    0 1 2 3 4 5 6 7 8
7 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 6 0 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F . . . . .   3
4   F 1 1 1 . . . . .   4
5   1 2 1 1 1 1 2 2 .   5
6   0 1 . 1 0 0 0 1 .   6
7   0 1 1 1 0 0 0 1 1   7
8   0 0 0 0 0 0 0 0 0   8
 
    0 1 2 3 4 5 6 7 8
7 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 6 2 f
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F . . . . .   3
4   F 1 1 1 . . . . .   4
5   1 2 1 1 1 1 2 2 .   5
6   0 1 F 1 0 0 0 1 .   6
7   0 1 1 1 0 0 0 1 1   7
8   0 0 0 0 0 0 0 0 0   8
 
    0 1 2 3 4 5 6 7 8
6 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 4 4 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F . . . . .   3
4   F 1 1 1 3 . . . .   4
5   1 2 1 1 1 1 2 2 .   5
6   0 1 F 1 0 0 0 1 .   6
7   0 1 1 1 0 0 0 1 1   7
8   0 0 0 0 0 0 0 0 0   8
 
    0 1 2 3 4 5 6 7 8
6 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 3 4 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F 3 . . . .   3
4   F 1 1 1 3 . . . .   4
5   1 2 1 1 1 1 2 2 .   5
6   0 1 F 1 0 0 0 1 .   6
7   0 1 1 1 0 0 0 1 1   7
8   0 0 0 0 0 0 0 0 0   8
 
    0 1 2 3 4 5 6 7 8
6 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 3 6 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F 3 . 4 . .   3
4   F 1 1 1 3 . . . .   4
5   1 2 1 1 1 1 2 2 .   5
6   0 1 F 1 0 0 0 1 .   6
7   0 1 1 1 0 0 0 1 1   7
8   0 0 0 0 0 0 0 0 0   8
 
    0 1 2 3 4 5 6 7 8
6 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 4 6 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F 3 . 4 . .   3
4   F 1 1 1 3 . 4 . .   4
5   1 2 1 1 1 1 2 2 .   5
6   0 1 F 1 0 0 0 1 .   6
7   0 1 1 1 0 0 0 1 1   7
8   0 0 0 0 0 0 0 0 0   8
 
    0 1 2 3 4 5 6 7 8
6 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 5 8 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F 3 . 4 . .   3
4   F 1 1 1 3 . 4 . .   4
5   1 2 1 1 1 1 2 2 2   5
6   0 1 F 1 0 0 0 1 .   6
7   0 1 1 1 0 0 0 1 1   7
8   0 0 0 0 0 0 0 0 0   8
 
    0 1 2 3 4 5 6 7 8
6 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 4 8 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F 3 . 4 . .   3
4   F 1 1 1 3 . 4 . 2   4
5   1 2 1 1 1 1 2 2 2   5
6   0 1 F 1 0 0 0 1 .   6
7   0 1 1 1 0 0 0 1 1   7
8   0 0 0 0 0 0 0 0 0   8
 
    0 1 2 3 4 5 6 7 8
6 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 3 8 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 .   2
3   1 1 1 F 3 . 4 . 2   3
4   F 1 1 1 3 . 4 . 2   4
5   1 2 1 1 1 1 2 2 2   5
6   0 1 F 1 0 0 0 1 .   6
7   0 1 1 1 0 0 0 1 1   7
8   0 0 0 0 0 0 0 0 0   8
 
    0 1 2 3 4 5 6 7 8
6 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 2 8 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 .   0
1   0 1 1 1 0 0 0 1 .   1
2   0 0 1 1 2 1 2 1 1   2
3   1 1 1 F 3 . 4 . 2   3
4   F 1 1 1 3 . 4 . 2   4
5   1 2 1 1 1 1 2 2 2   5
6   0 1 F 1 0 0 0 1 .   6
7   0 1 1 1 0 0 0 1 1   7
8   0 0 0 0 0 0 0 0 0   8
 
    0 1 2 3 4 5 6 7 8
6 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 1 8 s
 
    0 1 2 3 4 5 6 7 8
 
0   0 1 F 1 0 0 0 1 F   0
1   0 1 1 1 0 0 0 1 F   1
2   0 0 1 1 2 1 2 1 1   2
3   1 1 1 F 3 F 4 F 2   3
4   F 1 1 1 3 F 4 F 2   4
5   1 2 1 1 1 1 2 2 2   5
6   0 1 F 1 0 0 0 1 F   6
7   0 1 1 1 0 0 0 1 1   7
8   0 0 0 0 0 0 0 0 0   8
 
    0 1 2 3 4 5 6 7 8
You won!!! :)
Sample interaction 3:
Enter the Difficulty Level
Press 0 for BEGINNER     (9  * 9  cells and 10 mines)
Press 1 for INTERMEDIATE (16 * 16 cells and 40 mines)
Press 2 for ADVANCED     (16 * 30 cells and 99 mines)
1
    0 1 2 3 4 5 6 7 8 9 a b c d e f
 
0   . . . . . . . . . . . . . . . .   0
1   . . . . . . . . . . . . . . . .   1
2   . . . . . . . . . . . . . . . .   2
3   . . . . . . . . . . . . . . . .   3
4   . . . . . . . . . . . . . . . .   4
5   . . . . . . . . . . . . . . . .   5
6   . . . . . . . . . . . . . . . .   6
7   . . . . . . . . . . . . . . . .   7
8   . . . . . . . . . . . . . . . .   8
9   . . . . . . . . . . . . . . . .   9
a   . . . . . . . . . . . . . . . .   a
b   . . . . . . . . . . . . . . . .   b
c   . . . . . . . . . . . . . . . .   c
d   . . . . . . . . . . . . . . . .   d
e   . . . . . . . . . . . . . . . .   e
f   . . . . . . . . . . . . . . . .   f
 
    0 1 2 3 4 5 6 7 8 9 a b c d e f
40 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 6 c s
 
    0 1 2 3 4 5 6 7 8 9 a b c d e f
 
0   . . . . . . . . . . . . . . . .   0
1   . . . . . . . . . . . . . . . .   1
2   . . . . . . . . . . . . . . . .   2
3   . . . . . . . . . . . . . . . .   3
4   . . . . . . . . . . . . . . . .   4
5   . . . . . . . . . . . . . . . .   5
6   . . . . . . . . . . . . 2 . . .   6
7   . . . . . . . . . . . . . . . .   7
8   . . . . . . . . . . . . . . . .   8
9   . . . . . . . . . . . . . . . .   9
a   . . . . . . . . . . . . . . . .   a
b   . . . . . . . . . . . . . . . .   b
c   . . . . . . . . . . . . . . . .   c
d   . . . . . . . . . . . . . . . .   d
e   . . . . . . . . . . . . . . . .   e
f   . . . . . . . . . . . . . . . .   f
 
    0 1 2 3 4 5 6 7 8 9 a b c d e f
40 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> c c s
 
    0 1 2 3 4 5 6 7 8 9 a b c d e f
 
0   . . . . . . . . . . . . . . . .   0
1   . . . . . . . . . . . . . . . .   1
2   . . . . . . . . . . . . . . . .   2
3   . . . . . . . . . . . . . . . .   3
4   . . . . . . . . . . . . . . . .   4
5   . . 1 1 1 2 . . . . . . . . . .   5
6   . . 1 0 0 1 2 2 2 3 . . 2 . . .   6
7   . . 2 1 1 0 0 0 0 1 . . . . . .   7
8   . . . . 1 0 0 0 0 1 1 1 2 . 3 1   8
9   . . 2 1 1 0 0 0 0 0 0 0 1 . 1 0   9
a   . 2 1 0 0 0 0 0 0 0 0 0 1 1 1 0   a
b   . 1 0 0 1 1 1 0 1 1 1 0 0 0 0 0   b
c   . 1 2 1 3 . 2 1 2 . 1 0 0 0 0 0   c
d   . . . . . . . . . . 2 1 1 1 1 0   d
e   . . . . . . . . . . . . . . 1 0   e
f   . . . . . . . . . . . . . . 1 0   f
 
    0 1 2 3 4 5 6 7 8 9 a b c d e f
40 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 9 d f
 
    0 1 2 3 4 5 6 7 8 9 a b c d e f
 
0   . . . . . . . . . . . . . . . .   0
1   . . . . . . . . . . . . . . . .   1
2   . . . . . . . . . . . . . . . .   2
3   . . . . . . . . . . . . . . . .   3
4   . . . . . . . . . . . . . . . .   4
5   . . 1 1 1 2 . . . . . . . . . .   5
6   . . 1 0 0 1 2 2 2 3 . . 2 . . .   6
7   . . 2 1 1 0 0 0 0 1 . . . . . .   7
8   . . . . 1 0 0 0 0 1 1 1 2 . 3 1   8
9   . . 2 1 1 0 0 0 0 0 0 0 1 F 1 0   9
a   . 2 1 0 0 0 0 0 0 0 0 0 1 1 1 0   a
b   . 1 0 0 1 1 1 0 1 1 1 0 0 0 0 0   b
c   . 1 2 1 3 . 2 1 2 . 1 0 0 0 0 0   c
d   . . . . . . . . . . 2 1 1 1 1 0   d
e   . . . . . . . . . . . . . . 1 0   e
f   . . . . . . . . . . . . . . 1 0   f
 
    0 1 2 3 4 5 6 7 8 9 a b c d e f
39 flags left
 
Enter your move, (row, column, safe(s)/flag(f)) -> 7 a s
 
    0 1 2 3 4 5 6 7 8 9 a b c d e f
 
0   # . . # . . . . . . . # . . . #   0
1   . . . . # . # . . . . . # . . .   1
2   . . . # . # # . . . . . . . . .   2
3   . . . # . . # . . . . . . . . .   3
4   . . . . # . . . . . . . . . . #   4
5   . . 1 1 1 2 # # . # # . . . . .   5
6   . # 1 0 0 1 2 2 2 3 . . 2 # . .   6
7   . . 2 1 1 0 0 0 0 1 # . . # # .   7
8   # . . # 1 0 0 0 0 1 1 1 2 . 3 1   8
9   . # 2 1 1 0 0 0 0 0 0 0 1 F 1 0   9
a   # 2 1 0 0 0 0 0 0 0 0 0 1 1 1 0   a
b   . 1 0 0 1 1 1 0 1 1 1 0 0 0 0 0   b
c   . 1 2 1 3 # 2 1 2 # 1 0 0 0 0 0   c
d   . # . # . # . . # . 2 1 1 1 1 0   d
e   . . # . . . . . . . # . . # 1 0   e
f   . . . . . . # . # # . . . . 1 0   f
 
    0 1 2 3 4 5 6 7 8 9 a b c d e f
 
You lost! :(
