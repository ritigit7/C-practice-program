#include <stdio.h>
#include <string.h>

int main()
{
    int num, i, b, c, largest, smallest;
    printf("how many number you want to enter:");
    scanf("%d", &num);
    int n[num];
    for (i = 1; i <= num; i++)
    {
        printf("Enter number %d: \n", i);
        scanf("%d", &n[i]);
    }
    largest = n[1];
    for (b = 2; b <= num; b++)
    {
        if (largest < n[b])
        {
            largest = n[b];
        }
    }
    smallest = n[1];
    for (c = 2; c <= num; c++)
    {
        if (smallest > n[c])
        {
            smallest = n[c];
        }
    }
    printf("%d is biggest number\n", largest);
    printf("%d is smallest number", smallest);
    return 0;
}