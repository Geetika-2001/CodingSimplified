#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    //variable declaration
    int x, y, n;
    char ch;
    cout << "Number of rows : ";
    cin >> n;

    for (x = 1; x <= n; x++)
    {
        cout << "\n";
        ch = 'A';
        for (y = 1; y <= x; y++)
        {
            cout << ch;
            ch++;
        }
    }
    return 0;
}