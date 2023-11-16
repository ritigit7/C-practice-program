#include<stdio.h>
int main()
{
    int i;
    int *j=&i;
    int **r=&j ;
    printf("Enter the number:");
    scanf("%d", &i);
    printf("the value of i %d\n",i);
    printf("The value of j%d\n",*j);
    printf("The addrres of i %u\n", &i);
    printf("The addrres of j %u\n",j);
    printf("The addrres of j %u\n",&j);
    printf("The addrres of j %u\n",*(&j));
    printf("The addrres of j %d\n",r);
    printf("The addrres of j %u\n",r);
    printf("The addrres of j %u\n",&r);
    printf("The addrres of j %u\n",**r);
    return 0;
}
