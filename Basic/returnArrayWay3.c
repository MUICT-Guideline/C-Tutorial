#include <stdio.h>

struct array
{
    // this method, size of array is constant
    int arr[10];
};

// looks like init method of class
struct array getArray()
{
    // init p = (class) array to use its attribute
    struct array p;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &p.arr[i]);
    }
    return p;
}

struct array non_replace_Rverse(int size)
{
    struct array point;
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        int temp = point.arr[left];
        point.arr[left] = point.arr[right];
        point.arr[right] = temp;
        left += 1;
        right -= 1;
    }
    return point;
}

int main()
{
    struct array target = getArray();
    target = non_replace_Rverse(10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", target.arr[i]);
    }

    return 0;
}