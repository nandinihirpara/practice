#include <stdio.h>
int main()
{
    int m = 10, n = 1;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf(" ");
        }
        printf(" *");
        for (int k = 1; k <= n; k++)
        {
            if (k > 2)
            {
                printf("%d", k);
            }
        }
        if (i != 1)
        {
            printf("*");
        }
        n++;
        printf("\n");
    }
    return 0;
}