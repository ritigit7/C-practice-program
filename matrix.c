#include <stdio.h>

int main()
{
    int num[4];
    int i;
    for (i = 1; i <= 4; i++)
    {
        printf("Enter the number:");
        scanf("%d", &num[i]);
    }
    printf("|%d %d|\n", num[1], num[2]);
    printf("|%d %d|", num[3], num[4]);
    return 0;
}