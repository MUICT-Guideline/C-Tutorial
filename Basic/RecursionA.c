#include <stdio.h>

int power(int num, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else
    {
        return num * power(num, p - 1);
    }
}

int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

int main()
{
    printf("%d \n", power(3, 2)); // 9
    printf("%d \n", power(3, 3)); //27
    printf("%d \n", power(2, 4)); // 16
    printf("%d ", factorial(5));  // 2
    return 0;
}