#include<stdio.h>
int sum(int a,int b);//function prototype
int main()
{
    int c;
    c=sum(3,5);//function call
    printf("The sum of a and b =%d",c);
    return 0;
}
int sum(int a,int b)
{
    int result;
    result=a+b;
    return result;
}
