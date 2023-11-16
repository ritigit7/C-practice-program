#include<stdio.h>
#include<string.h>

int main()
{
    char *ptr="Ritik Maurya";
    char *c="ABCD";
    int d=strcmp(ptr,c);  //string compare with askayi value ex--->n1=hello, n2=he8lo it return 1 . but n2=hezlo it return -1 . mans it return subtraction of askeyi vakue //
    int a=strlen(ptr);  //length of string//
    int b[5];
    ptr="Mauyra Rirtik"; //value change //
    printf("%s\n",ptr);
    printf("%d\n",a);
   // strcpy(b,ptr);  //copy of string//
    printf("%s\n",b);
    strcat(ptr,c);  //ptr ni pachhad c ne add kare without space//
    printf("%s\n",ptr);
    printf("%d\n",d);
    return 0;
}