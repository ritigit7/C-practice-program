#include <stdio.h>
#include <math.h>
int main()
{
 int number, c;
 printf("Enter the number :");
 scanf("%d", &number);
 if (number == 2 || number == 3 || number == 5 || number == 7)
 {
     printf("%d is a prime number ", number);
 }
 else if (number % 7 != 0 && number % 3 != 0 && number % 2 != 0 && number % 5 != 0 && sqrt(number) != 0)
 {
     printf("%d is prime number", number);
 }
 else
 {
     printf("%d is not a prime number", number);
 }
    return 0;
}