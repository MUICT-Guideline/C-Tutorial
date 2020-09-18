#include <stdio.h>

// print
/*
        *
       ***
      *****
     *******
    *********
   ***********
  *************
 ***************
*****************
*****************
 ***************
  *************
   ***********
    *********
     *******
      *****
       ***
        *

*/

// the base of pyramid is based on non-negative odd number
int main()
{
    // input n can be arbitary non-negative odd number
    int n = 17;
    int space = 0;
    int temp = n;
    while (temp != 1)
    {
        temp -= 2;
        space += 1;
    }
    // got space
    while (temp <= n)
    {
        // print space
        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }
        // print *
        for (int j = 0; j < temp; j++)
        {
            printf("*");
        }
        printf("\n");
        temp += 2;
        space -= 1;
    }

    n = 17;
    space = 0;
    while (n >= 1)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
        n -= 2;
        space += 1;
    }

    return 0;
}