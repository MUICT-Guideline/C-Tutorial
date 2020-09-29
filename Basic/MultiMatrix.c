#include <stdio.h>

int main()
{
    // given 2 matrix
    // find multiplication of 2 matrix
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int m = 2;
    int n = 3;
    int p = 3;
    int q = 2;
    int c[2][2];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            c[i][j] = 0;
            int index = 0;
            while (index < n)
            {
                int first = a[i][index];
                int sec = b[index][j];
                c[i][j] += (first * sec);
                index += 1;
            }
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}