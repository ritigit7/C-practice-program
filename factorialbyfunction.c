#include <stdio.h>
int factorial(int a);
int main()
{
    int a;
    printf("Enet the number :");
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}
int factorial(int a)
{
    // printf("calling the function(%d)\n",a);
    if (a == 1 || a == 0)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}
