#include <stdio.h>
int main()
{
    int num, i, j, n;
    printf("How many line you Enter: ");
    scanf("%d", &num);
    n = (2 * num - 1);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i + j <= num || i + j >= num + 2 * i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}