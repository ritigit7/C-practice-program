#include <stdio.h>
#include <string.h>

int main()
{
    int num, i, j, largest, temp;
    printf("how many number you want to enter:");
    scanf("%d", &num);
    int n[num];
    for (i = 1; i <= num; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &n[i]);
    }
    largest = n[1];
    for (i = 2; i <= num; i++)
    {
        if (largest < n[i])
        {
            largest = n[i];
        }
    }
    int f[largest];
    //    printf("%d",largest);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= largest; j++)
        {
            if (j == n[i])
            {
                temp = n[i];
                f[j] = temp;
            }
        }
    }
    for (i = 1; i <= largest; i++)
    {
        if (i == f[i])
        {
            printf("%d\n", i);
        }
    }
    return 0;
}