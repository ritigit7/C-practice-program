#include <stdio.h>

int main()
{
    int number, i, temp;
    printf("How many number you want to enater:");
    scanf("%d", &number);
    int n[number], b = number - 1;
    for (i = 1; i <= number; i++)
    {
        printf("n%d:", i);
        scanf("%d", &n[i]);
    }
    temp = n[number];
    for (i = number; i >= 2; i--)
    {
        n[i] = n[b];
        b--;
    }
    n[1] = temp;
    for (i = 1; i <= number; i++)
    {
        printf("n%d:%d\n", i, n[i]);
    }
    return 0;
}