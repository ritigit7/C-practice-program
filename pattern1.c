#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= i && (n + 1 - i) >= j)
            {
                printf("%d", j);
            }
            else if (j >= i && (n + 1 - i) <= j)
            {
                printf("%d", n + 1 - j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}