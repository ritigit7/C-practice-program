#include <stdio.h>
int main()
{
    int num, scn = 0, sum = 0, c, temp;
    printf("Enter the number:");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        scn = num % 10;
        num = num / 10;
        c = scn * scn * scn;
        sum = sum + c;
    }
    if (temp == sum)
    {
        printf("%d is a Armstrong number ", temp);
    }
    else
    {
        printf("%d is not a Armstrong number ", temp);
    }
    return 0;
}
