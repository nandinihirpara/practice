#include <stdio.h>
#include <conio.h>
int main()
{
    for (int i = 0; i <= 11; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= 2; j++)
        {
            printf("*");
        }
        for (int l = 9; l >= i; l--)
        {
            printf(" ");
        }
        for (int j = 0; j <= 2; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}