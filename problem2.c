#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter the number :");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (int b = i; b <= i * i; b = b + i)
        {
            printf("%d ", b);
        }
        printf("\n");
    }
    return 0;
}