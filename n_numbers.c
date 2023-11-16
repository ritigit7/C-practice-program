#include<stdio.h>
int main()
{
    int a,num;
    printf("Enter the number:");
    scanf("%d", &num);
    for(a=1;a<=num;a++)
    {
        printf("%d\n",a);
    }
    return 0;
}
