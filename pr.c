#include <stdio.h>
int main()
{
    int u;
    printf("Enter any number=");
    scanf("%d", &u);
    for (int i = 1; i <= 8; i++)
    {
        for (int j = i; j <= 8; j++)
        {
            printf("0");
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}