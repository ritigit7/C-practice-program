#include <stdio.h>
#include <string.h>
int i, j, s, pivot, start, end,pindex;
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int patition(int arr[], int start, int end)
{
    pindex=start;
    pivot=arr[end];
    for (i = start; i < end; i++)
    {
        if (arr[i] < arr[pivot])
        {
            swap(&arr[i], &arr[pindex]);
            pindex++;
        }
    }
    swap(&arr[end], &arr[pindex]);
    return pindex;
}
int sort(int arr[], int start, int end)
{
    if (start < end)
    {
        pindex = patition(arr, start, end);
        sort(arr, start, pindex - 1);
        sort(arr, pindex + 1, end);
    }
}
int main()
{
    printf("Enter the size of array:");
    scanf("%d", &s);
    int arr[s];
    for (i = 0; i < s; i++)
    {
        printf("n%d:", i+1);
        scanf("%d", &arr[i]);
    }
    sort(arr, 0, s - 1);
    for (i = 0; i < s; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}