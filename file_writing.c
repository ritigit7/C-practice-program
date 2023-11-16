#include<stdio.h>
#include<string.h>

int main()
{
    int a, number;
    FILE *d;
    // FILE *file;
    // file=fopen("Writing_File.txt","w");
    // fprintf(file,"I am tring My first file making program,\n amd its working. c programm os creat the txt file");
    // fclose(file); 
    d=fopen("Ritik.txt","w");
    printf("Enter the number:");
    scanf("%d", &number);
    fprintf(d,"%d", number);
    // fscanf(d,"%d", &a);
    // printf("%d", &a); 
    fclose(d);
    return 0;
}