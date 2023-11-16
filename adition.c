#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the number:\n");
    scanf("%f", &a);
    printf("Enter the number:\n");
    scanf("%f", &b);
    printf("sum of a+b=%f\n",a+b);
    printf("divition of a/b=%f\n",a/b);
    printf("subtration of a-b=%f\n",a-b);
    printf("multipication of a*b=%f\n",a*b);
    printf("function of %f\n",ceil(a/b));
    printf("%f",sqrt(a));
    return 0;

}
