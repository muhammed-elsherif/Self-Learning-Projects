#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    height = get_int("height= ");
    while (height < 1 || height > 8){
        height = get_int("height= ");
    }
    for (int i=0; i<height; i++)
    {
        int hashes = i+1;
        int spaces = height - hashes;
        for (int j=0; j<spaces; j++)
        {
            printf(" ");
        }
        for (int k=0; k<hashes; k++) printf("#");
        printf("\n");
    }
}
