#include<stdio.h>
int desine(int a);
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",a);
    printf("%d",desine(a));
    return 0;
}
int desine(int a){
    if(a!=0){
    printf("*");
    return desine(a+1);
    }

}
