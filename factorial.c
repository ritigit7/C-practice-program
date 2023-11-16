#include<stdio.h>
#include<math.h>
int main()
{
    int num,a,fact=1;
    printf("Enter the number:");
    scanf("%d", &num);
    for(a=num;a>=1;a--)
    {
       fact=fact*a;
    }
    printf("%d!=%d",num,fact);
    return 0;
}

