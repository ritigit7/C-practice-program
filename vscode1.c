#include <stdio.h>
int fun(f, int n)
{
    return f(n);
}
int f(int n)
{
    return 5 * n;
}
int main()
{
    int n=4;
    fun(&f, n);
    return 0;
}