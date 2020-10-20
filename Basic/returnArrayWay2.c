#include <stdio.h>

// Using Static Variable

int *inputArray()
{
    // size and array are fixed
    static int array[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    return array;
}

int main()
{
    int *pointer;
    pointer = inputArray();
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", pointer[i]);
    }

    return 0;
}