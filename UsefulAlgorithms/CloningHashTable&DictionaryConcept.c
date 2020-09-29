#include <stdio.h>
int main()
{

    // dictionary (cloned from hash table concept)
    // dict = {}
    // if key not in dict : value of key = 1
    // else value of key += 1
    // this code showing below can be applied to any key in ASCII
    // for more visualization, see here --> https://subscription.packtpub.com/book/application_development/9781786464507/4/ch04lvl1sec25/dictionaries
    // and alsk --> https://www.tutorialspoint.com/data_structures_algorithms/hash_data_structure.htm
    char str = '1';
    // dict size can be any size but 1000 is example
    int dict[1000][2];
    int actualSize = 0;
    for (int i = 0; i < 26; i++)
    {
        dict[i][0] = 0;
        dict[i][1] = 0;
    }
    while (str != '0')
    {
        scanf(" %c", &str);
        if (str >= 'a' && str <= 'Z')
        {
            str -= ('a' - 'A');
        }
        if (str != '0')
        {
            // search str in dictionary or not
            int found = 0;
            for (int i = 0; i < actualSize; i++)
            {
                // increase str value into dictionary
                if (dict[i][0] == str)
                {
                    found = 1;
                    dict[i][1] += 1;
                    break;
                }
            }
            // insert str into dictionary
            if (found == 0)
            {
                dict[actualSize][0] = str;
                dict[actualSize][1] = 1;
                actualSize += 1;
            }
        }
    }
    // sort in order
    // not work for swap entire 2 array
    // you need to swap by elements in array only
    // commented code is not work for swap entire showing below
    // for (int i = 0; i < actualSize; i++)
    // {
    //     for (int j = i + 1; j < actualSize; j++)
    //     {
    //         if (dict[i][0] > dict[j][0])
    //         {
    //             int temp[2] = dict[i];
    //             dict[i] = dict[j];
    //             dict[j] = temp;
    //         }
    //     }
    // }

    // insert char into alphabet
    int alphabet[actualSize];
    for (int i = 0; i < actualSize; i++)
    {
        alphabet[i] = dict[i][0];
    }
    // sort in order A-Z
    for (int i = 0; i < actualSize; i++)
    {
        for (int j = i + 1; j < actualSize; j++)
        {
            if (alphabet[i] > alphabet[j])
            {
                int temp = alphabet[i];
                alphabet[i] = alphabet[j];
                alphabet[j] = temp;
            }
        }
    }
    // alphabet index
    for (int i = 0; i < actualSize; i++)
    {
        // dict index
        for (int j = 0; j < actualSize; j++)
        {
            if (alphabet[i] == dict[j][0])
            {
                printf("%c:%d", alphabet[i], dict[j][1]);
                printf("\n");
                break;
            }
        }
    }
    return 0;
}