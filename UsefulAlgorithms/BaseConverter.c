#include <stdio.h>

int toPower(int n, int power)
{
    int result = 1;
    int i = 0;
    while (i < power)
    {
        result *= n;
        i += 1;
    }

    return result;
}

int toBaseTen(char *s, int sSize, int base)
{
    char symbols[6][2] = {{'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14}, {'F', 15}};
    int result = 0;
    int index = 0;
    for (int i = sSize - 1; i >= 0; i--)
    {
        char convert = s[index];
        int sym = 0;
        for (int j = 0; j < 6; j++)
        {
            int get = 0;
            if (convert == symbols[j][get])
            {
                convert = symbols[j][get + 1];
                sym = 1;
            }
        }
        if (sym == 0)
        {
            convert -= 48;
        }
        result += (convert * (toPower(base, i)));
        index += 1;
    }
    return result;
}

int main()
{
    char base3[5] = "12211";
    char base16[3] = "2F1";
    char base15[4] = "3A4B";
    printf("%d\n", toBaseTen(base3, 5, 3));   // 157
    printf("%d\n", toBaseTen(base16, 3, 16)); // 753
    printf("%d\n", toBaseTen(base15, 4, 15)); // 12446
    return 0;
}