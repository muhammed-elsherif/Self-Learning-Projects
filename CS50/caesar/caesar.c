#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if (argc == 2)
    {
        int key = atoi(argv[1]);
        for (int j = 0, z = strlen(argv[1]); j < z; j++)
        {
            if (!isdigit(argv[1][j]))
            {
                return 1;
            }
        }
        string s = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            int c = 0;
            if (isalpha(s[i]))
            {
                if (isupper(s[i]))
                {
                    c = (s[i] + key - 65) % 26 + 65;
                }
                else if (islower(s[i]))
                {
                    c = (s[i] + key - 97) % 26 + 97;
                }
                printf("%c", (char)c);
            }
            else
            {
                printf("%c", s[i]);
            }
        }
    }
    printf("\n");
    return 0;
}