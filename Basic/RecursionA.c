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

int main()
{
    printf("%d ", power(3, 2)); // 9
    printf("%d ", power(3, 3)); //27
    printf("%d ", power(2, 4)); // 16
    return 0;
}