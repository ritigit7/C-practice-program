#include <stdio.h>
#include <string.h>
struct employ
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    int num, i;
    printf("Enter the number of employes:");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        struct employ e[i];
        printf("Enter the Employ code:");
        scanf("%d", &e[i].code);
        printf("Enter the Employ salary:");
        scanf("%f", &e[i].salary);
        printf("Enter the Employ name:");
        scanf("%s", &e[i].name);
        printf("\n");
    }
    return 0;
}