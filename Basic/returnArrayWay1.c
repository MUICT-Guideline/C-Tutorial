#include <stdio.h>

// Using dynamically allocated array

// Returning array by passing an array which is to be returned as a parameter to the function.

int *inputArrayA(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    return arr;
}

int *non_replace_Reverse(int *array, int size)
{
    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        int temp = array[left];
        array[left] = array[right];
        array[right] = temp;
        left += 1;
        right -= 1;
    }

    return array;
}

int main()
{
    // init size
    // init by pointer of array
    // init actualArray
    int n;
    scanf("%d", &n);
    int *pointerArrayA;
    int holdArray[n];
    pointerArrayA = inputArrayA(holdArray, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", pointerArrayA[i]);
    }

    // int t1[7] = {1, 2, 3, 4, 5, 6, 7};
    // int *p;
    // int t2[7];
    // p = non_replace_Reverse(t1, 7);
    // for (int i = 0; i < 7; i++)
    // {
    //     printf("%d ", p[i]);
    // }

    return 0;
}