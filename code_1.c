#include <stdio.h>

int main(void)
{
    int ans, nor, v1, l, v2;
    // scanf("%d",&nor);
    // for (int i = 0; i < nor; i++)
    // {
    printf("");
    scanf("%d %d %d", &l, &v1, &v2);
    int t1 = ((l / v1));
    int t2 = ((l / v2));
    printf("%d",t2);
    if (t1 == t2)
    {
        printf("-1");
    }
    else if (t2 - t1 == 1)
    {
        printf("0");
    }
    else if (t2 - t1 > 2)
    {
        printf("2");
    }
    // }
    return 0;
}
