#include <stdio.h>
int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            printf("-");
            if (i == 1 || i == 9 || j == 1 || j == 9)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
};