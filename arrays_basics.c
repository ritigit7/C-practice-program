#include <stdio.h>

int main()
{
    int a;
    int mark[a];
  //  char name[50];
    //gets(name);
    printf("How many subjects :");
    scanf("%d", &a);
    float sum = 0;
    for (int i = 0; i < a; i++)
    {
        printf("Enter marks %d:", i + 1);
        scanf("%d", &mark[i]);
        sum = sum + mark[i];
    }
    printf("The persantage of %d number is %f :", a, (sum / a));
    if ((sum / a) >= 90)
    {
        printf("A grade");
    }
    else if ((sum / a) <= 90 || (sum / a) >= 70)
    {
        printf("B grade");
    }
    else if ((sum / a) >= 50 || (sum / a) <= 70)
    {
        printf("C grade");
    }
    else
    {
        printf("you are fail");
    }
    return 0;
}