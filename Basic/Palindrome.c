#include <stdio.h>

int main()
{
    // reverse them and check if it equal or Not
    int n = 5;
    scanf("%d", &n);
    int list[n];
    int hold[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
        hold[i] = list[i];
    }
    // Two iteration reverse method
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int temp = list[left];
        list[left] = list[right];
        list[right] = temp;
        left += 1;
        right -= 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (list[i] != hold[i])
        {
            printf("Not Palindrome");
            return 0;
        }
    }
    printf("Palindrome");
    return 0;
}