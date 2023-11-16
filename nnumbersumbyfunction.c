#include<stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("sum of n number is %d",sum(n));
    return 0;
}
int sum(int n)
{
    if(n!=0){



    return n+sum(n-1);
    }
}
