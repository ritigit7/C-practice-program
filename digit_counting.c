#include <stdio.h>

int main()
{
    int num, i=0;
    printf("Enter the number:");
    scanf("%d", &num);
    while(num!=0)
    {
        num = num / 10;
        i++;
    }
    printf("%d", i);
    return 0;
}