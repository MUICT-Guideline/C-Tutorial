#include <stdio.h>

// string is just a group of char

// reverse method
void recursinInPlace(char *s, int left, int right)
{
    if (left >= right)
    {
        // pass
    }
    else
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        recursinInPlace(s, left + 1, right - 1);
    }
}

// This is one of the examples methods to show that array methods can be used as string
// you may not know how this function work, let see the description at --> https://github.com/MUICT18Guideline/C_Tutorial/blob/master/Methods/Reverse.c

int main()
{
    // char varName[MaximumSizeOfString]
    // char string[20];
    // input string
    // scanf(" %s", &string);
    // printf("%s\n", string);

    // copy string into another variable
    char s[6] = "OMAWy";
    char hold[6] = "";
    printf("%s\n", s);
    // assign all s[i] into hold[i]
    for (int i = 0; i < 5; i++)
    {
        hold[i] = s[i];
        printf("%c\n", s[i]);
    }
    // Before : OMAWy
    printf("%s\n", hold);
    // methods of string is similar as array
    recursinInPlace(hold, 0, 5 - 1);
    // After : yWAMO
    printf("%s\n", hold);
    return 0;
}