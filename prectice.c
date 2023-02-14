#include <stdio.h>
int main()
{
    int u, t;
    printf("Enter the number=");
    scanf("%d", &u);
    t = 2 * u - 1;
    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j <= t; j++)
        {
            if (i == j || j == (t - i + 1))
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
};
