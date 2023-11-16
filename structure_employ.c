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
    struct employ e1;
    e1.code = 123;
    e1.salary = 45000;
    strcpy(e1.name, "Ritik");
    printf("%d\n",e1.code);
    printf("%.3f\n",e1.salary);
    printf("%s\n",e1.name);
    return 0;
}