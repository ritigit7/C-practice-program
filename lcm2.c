#include <stdio.h>

int main()
{
    int num, m, i, b, c, d, largest, temp, temp2, temp3, temp4, a = 1;
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
            temp2 = b;
        }
    }
    printf("%d th number %d is biggest number\n", temp2, largest);
    temp3 = largest;
    for (d = 1; d <= num; d++)
    {
        if (d != temp2 || largest % n[d] != 0)
        {
            for (m = n[d] - 1; m > 0; m--)
            {
                if (n[d] % m == 0)
                {
                    c = n[d] / m;
                    n[d] = m;
                    if (temp3 % c == 0)
                    {
                        temp3 = temp3 / c;
                    }
                    if (temp3 % c != 0)
                    {
                        temp4 = largest * c;
                        largest = temp4;
                    }
                }
            }
            // if (d == num)
            // {
            //     printf("%d\n", temp4);
            // }
        }
        // else
        // {
        //     printf("%d\n", largest);
        // }
    }
    printf("%d", temp4);
    return 0;
}