#include <stdio.h>

int main()
{
    int a, i = 1;
    scanf("%d",&a);
    int n[a];
    // int *p = &i;
    while (a != 0)
    {
        if (a % 2 == 0)
            n[i] = 0;
        else
            n[i] = 1;
        a = a / 2;
        if(a==0)
        break;
        i++;
    }
    while (i > 0)
    {
        printf("%d", n[i]);
        i--;
    }
    
    return 0;
} // 6422036->0x61FE14