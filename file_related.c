#include <stdio.h>

int main()
{
    int num, num2; // num2 is read second number ,second  number after space
    FILE *ptr;
    ptr = fopen("MySelf.txt", "r"); // open for read
    // ptr=fopen("testing.jpg","w"); //open for read
    // ptr=fopen("MySelf2.txt","w"); //open fir wright --> it creat the file
    if (ptr == NULL)
    { 
        printf("Please make the file which you want to read");
    }

    fscanf(ptr, "%d", &num); // fscanf is scan the intger of file
    printf("The number of MySelf file is : %d\n", num);
    fscanf(ptr, "%d", &num2);
    printf("The number of MySelf file is : %d", num2);
    fprintf(ptr,"My name is ritik");// --->fprintf() is write something in file.
    // fgetc(ptr);// ------>fgets is read one caracter
    // fputc("c",ptr);//------>fgets is wright one caracter
    // 
    // int n, nm[n];
    // printf("Enter the number :");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    //{
    //     fscanf(ptr, "%d", &nm[i]);
    //     printf("The number of MySelf file is : %d\n", nm[i]);
    // }
    fclose(ptr); // fclose is close the file
    return 0;
}