#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number;
    srand(time(0));
    number=rand()%1000+1;
    printf("random numer is %d",number);
    return 0;
}