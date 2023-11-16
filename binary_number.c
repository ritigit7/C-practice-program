#include <stdio.h>
int main()
{
    int n, i, c;
    printf("Enter the number :");
    scanf("%d", &n);
    int b[n];
    for (i = 1; i > 0; i++)
    {
        b[i] = n % 2;
        n = n / 2;
        if (n == 0)
        {
            break;
        }
    }
    for (c = i; c >= 1; c--)
    {
        printf("%d", b[c]);
    }
    return 0;
}