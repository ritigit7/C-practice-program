#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number how many num  you want to revers:");
    scanf("%d", &n);
    int rev[n];

    for (int i = 0; i <n; i++)
    {
        printf("Enter the number :");
        scanf("%d", &rev[i]);
    }
    for (int  b =n; b>=0; b--)
    {
        printf("The revers of the number is :%d\n",rev[b]);
    }
    
        
    return 0;
}