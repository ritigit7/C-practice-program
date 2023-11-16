// #include <stdio.h>

// int main()
// {
//     int num,s1,s2;
//     char n1[10],n2[10];
//     //printf("Enter the number which you want to make table:");
//     //scanf("%d", &num);
//     //FILE *table;
//     //table = fopen("table.txt", "w");
//     //for (int i = 1; i <= 10; i++)
//     //{
//     //    fprintf(table, "%d x %d = %d\n", num, i, num * i);
//     //}
//     //fclose(table);
//     FILE *ptr;
//     ptr = fopen("as.txt", "w");
//     printf("Enter the name:");
//     scanf("%s", n1);
//     printf("Enter the salary:");
//     scanf("%d", &s1);
//     printf("Enter the name:");
//     scanf("%s", n2);
//     printf("Enter the salary:");
//     scanf("%d", &s2);

//     fprintf(ptr," %s, %d\n",n1,s1);
//     fprintf(ptr," %s, %d",n2,s2);
//     return 0;
// }
#include <stdio.h>

int main()
{
    int i, number,fact=1;
    printf("Enter the number");
    scanf("%d", &number);
    for (i = number; i >= 1 ; i--)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}