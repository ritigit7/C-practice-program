#include <stdio.h>

int main()
{

    int i, j;
    int d = j;
    char t;
    scanf("%d %d", &i, &j);
    int arr[i][j];
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            arr[a][b] = scanf("%c", &t);
            if (t == 'x')
            {
                for (int e = 0; e < d; e++)
                {
                    arr[a][e] = 'x';
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d",arr[i][j]);
        }
        
    }
    

    return 0;
}