package app;

import java.util.Random;

public class DrawingApp {
    /*
     * For every method remove the line with "throw ..." and implement the method.
     * We are using "throw..." so your code does not display any compilation errors
     * when you import the zip file. Also, if you don't implement a method you will
     * see a white square (instead of green) in the submit server
     */
    public static String getRectangle(int maxRows, int maxCols, char symbol) {
        if (maxRows < 1 || maxCols < 1) {
            return null;
        }
        String rectangle = "";
        for (int i = 0; i < maxRows; i++) {
            for (int j = 0; j < maxCols; j++) {
                rectangle = rectangle + symbol;
            }
            rectangle = rectangle + '\n';
        }
        return rectangle.trim();
    }

    public static String getFlag(int size, char color1, char color2, char color3) {
        if (!isValidColor(color1) || !isValidColor(color2) || !isValidColor(color3)) {
            return null;
        }
        String flag1 = "", flag2 = "", row = "";
        // first and last row
        row = color1 + "";
        for (int i = 1; i < size * 5; i++) {
            row += color2 + "";
        }
        flag1 = flag1 + row;
        flag2 = flag2 + row;
        // rest of the rows except middle
        for (int i = 1; i < size - 1; i++) {
            row = "";
            for (int j = 0; j <= i; j++) {
                row += color1 + "";
            }
            for (int j = i + 1; j < size * 5; j++) {
                row += color3 + "";
            }
            flag1 = flag1 + '\n' + row;
            flag2 = row + '\n' + flag2;
        }
        // middle row
        row = "";
        for (int i = 0; i < size; i++) {
            row += color1 + "";
        }
        for (int i = size; i < size * 5; i++) {
            row += color2 + "";
        }
        flag1 = flag1 + '\n' + row;
        flag2 = row + '\n' + flag2;
        return (flag1 + '\n' + flag2).trim();
    }

    public static String getHorizontalBars(int maxRows, int maxCols, int bars, char color1, char color2, char color3) {
        if (!isValidColor(color1) || !isValidColor(color2) || !isValidColor(color3)) {
            return null;
        } else if (maxCols < 1 || bars > maxRows) {
            return null;
        }
        int barSize = maxRows / bars;
        String bar = "";
        for (int i = 0; i < barSize; i++) {
            for (int j = 0; j < maxCols; j++) {
                bar = bar + '#';
            }
            bar = bar + '\n';
        }
        String horizontalBars = "";
        for (int i = 0; i < bars; i++) {
            char c;
            int x = i % 3;
            switch (x) {
                case 0:
                    c = color1;
                    break;
                case 1:
                    c = color2;
                    break;
                default:
                    c = color3;
                    break;
            }
            horizontalBars = horizontalBars + bar.replaceAll("#", c + "");
        }
        return horizontalBars.trim();
    }

    public static String getVerticalBars(int maxRows, int maxCols, int bars, char color1, char color2, char color3) {
        if (!isValidColor(color1) || !isValidColor(color2) || !isValidColor(color3)) {
            return null;
        } else if (maxRows < 1 || bars > maxCols) {
            return null;
        }
        int barSize = maxCols / bars;
        String bar = "";
        for (int i = 0; i < barSize; i++) {
            bar += "#";
        }
        String verticalBarRow = "";
        for (int i = 0; i < bars; i++) {
            int x = i % 3;
            switch (x) {
                case 0:
                    verticalBarRow = verticalBarRow + bar.replaceAll("#", color1 + "");
                    break;
                case 1:
                    verticalBarRow = verticalBarRow + bar.replaceAll("#", color2 + "");
                    break;
                case 2:
                    verticalBarRow = verticalBarRow + bar.replaceAll("#", color3 + "");
                    break;
                default:
                    break;
            }
        }
        String finalBar = "";
        for (int i = 0; i < maxRows; i++) {
            finalBar = finalBar + verticalBarRow + '\n';
        }
        return finalBar.trim();
    }

    public static char getRandomColor(Random random) {
        // for testing you can use nextInt(7) for default cases
        int c = random.nextInt(6);
        switch (c) {
            case 0:
                return 'R';
            case 1:
                return 'G';
            case 2:
                return 'B';
            case 3:
                return 'Y';
            case 4:
                return '*';
            case 5:
                return '.';
            default:
                return 'X';
        }
    }

    private static boolean isValidColor(char color) {
        if (color == 'R' || color == 'G' || color == 'B' || color == 'Y' || color == '*' || color == '.') {
            return true;
        } else {
            return false;
        }
    }
}