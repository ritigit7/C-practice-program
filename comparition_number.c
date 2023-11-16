#include <stdio.h>

int main()
{
    int n;
    printf("How many number you want to enter:\n");
    scanf("%d", &n);

    int num[n];
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the numbers:\n");
        scanf("%d", &num[i]);
    }

    for (int b = 1; b <= n; b++)
    {
        if (num[b] < num[b + 1])
        {
            printf("%d is bigger than %d\n", num[b + 1], num[b]);
        }
        else
        {
            printf("%d is smaller than %d\n", num[b + 1], num[b]);
        }
    }

    return 0;
}