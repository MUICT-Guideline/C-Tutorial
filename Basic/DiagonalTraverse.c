// given square 2D array, i x i (สี่เหลี่ยมจัตุรัส ด้าน x ด้าน)
// like this
// 1 2 3 4
// 6 7 8 9
// 11 12 13 14
// 16 17 18 19

// The visual concept can be looked at here --> https://leetcode.com/problems/diagonal-traverse-ii/

// print out 1 6 2 11 7 3 16 12 8 4 17 13 9 18 14 19

#include <stdio.h>

int main()
{
    int n[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    int rSize = 5;
    int cSize = 5;
    int row = 0;
    int col = 1;
    int i = 0;
    int j = 0;
    while (row < rSize || col < cSize)
    {
        if (row < rSize)
        {
            i = row;
            j = 0;
        }
        else
        {
            i = row - 1;
            j = col;
        }
        while (i >= 0 && j < cSize)
        {
            printf("%d ", n[i][j]);
            i -= 1;
            j += 1;
        }
        if (row < rSize)
        {
            row += 1;
        }
        else if (row == rSize)
        {
            col += 1;
        }
    }

    return 0;
}