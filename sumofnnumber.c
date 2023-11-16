#include<stdio.h>
int main()
{
    int a,num,sum=0;
    printf("Enter the number:");
    scanf("%d", &num);
    for(a=1;a<num;a++)
    {
        sum=sum+a;

    }
    printf("The sum is =%d",sum);
    return 0;
}
