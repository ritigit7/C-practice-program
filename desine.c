#include<stdio.h>
int main()
{
    int num,a,b;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(a=0;a<=num;a++)
    {
        for(b=0;b<=a;b++)
        {
            printf("*");
        } 
        printf("\n");
    }
    return 0;
}
