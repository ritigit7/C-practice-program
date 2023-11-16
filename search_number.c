#include<stdio.h>

int main()
{
    int n,search;
    printf("How many number you want to enter:\n");
    scanf("%d", &n);
   
    int num[n];
    for (int i=1;i<=n; i++)
    {
        printf("Enter the numbers:\n");
        scanf("%d", &num[i]);
    }

    printf("Enter the number which want to you search:\n");
    scanf("%d", &search);

    for (int b=1;b<=n; b++)
    {
        if (search==num[b])
        {
            printf("Yes %d number is %d.\n ",search,b);
            
        }
        else{
            printf("No %d number is not %d.\n",search,b);
        }
    }
        

        
    return 0;
}