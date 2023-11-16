#include <stdio.h>
#include <math.h>
int main()
{
    int num, i, temp;
    printf("Enter the number :");
    scanf("%d", &num);
    for (i = num - 1; i > 0; i--)
    {
        if (num % i == 0)
        {
            printf("%d\n", num / i);
            num = i;
        }
    }
    return 0;
}