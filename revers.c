/*#include<stdio.h>
int rev(int number) {
    int scn=0,sum,prev=0;
    while(number>0) {
        scn=scn*10+number%10;


        //   printf("%d",scn);
        number=number/10;
     //   int c=scn*scn*scn;
       // sum=c+prev;
      //  prev=sum;
      //  printf("%d\n",c);
    }
    return scn;
}
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    printf("%d",rev(number));

    return 0;
}
*/
#include <stdio.h>

int main()
{
    int n, t, p;
    printf("Enter the number:");
    scanf("%d", &n);
    p = n;
    for (int i = 1; i < p; i++)
    {
        t = n % 10;
        printf("%d", t);
        // int c = n - t;
        n = n / 10;
        if (n == 0)
        {
            break;
        }
    }
    return 0;
}