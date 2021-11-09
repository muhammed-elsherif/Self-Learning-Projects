#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return  1;
    }
    else
    {
        if (strlen(argv[1]) != 26)
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }
        string key = (argv[1]);
        for (int i = 0, n = strlen(key); i < n; i++)
        {
            if (!isalpha(key[i]))
            {
                printf("Key must only contain alphabetic characters.\n");
                return 1;
            }
            for (int j = i + 1; j < n; j++)
            {
                if (key[i] == key[j])
                {
                    printf("Key must not contain repeated characters.\n");
                    return 1;
                }
            }
        }
        string s = get_string("plaintext: ");
        printf("ciphertext: ");

        for (int i = 0, z = strlen(s); i < z; i++)
            if (isalpha(s[i]) && isupper(s[i]))
            {
                int upper = s[i] - 65;
                printf("%c", toupper(argv[1][upper]));
            }
            else if (isalpha(s[i]) && islower(s[i]))
            {
                int lower = s[i] - 97;
                printf("%c", tolower(argv[1][lower]));
            }
            else
            {
                printf("%c", s[i]);
            }
        printf("\n");
        return 0;
    }
}