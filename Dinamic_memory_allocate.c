#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int number, num;
    int *ptr;
    ptr = (int *)malloc(3 * sizeof(int));
    // ptr = (int *) calloc(3 * sizeof(int));
    //  .         .             .> return size of 1 intiger
    //            .
    //  .         .>space for 30 intiger
    // \ /
    // casting void pointer piont
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter the number %d : %d\n", i, ptr[i]);
    }
    return 0;
}