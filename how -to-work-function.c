#include<stdio.h>
int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return factorial;
}

int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    printf("%d",factorial(num));
    return 0;
}