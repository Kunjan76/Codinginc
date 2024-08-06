#include<stdio.h>
int fra(int n)
{
if (n>=1)
{
    return n * fra(n-1);
 }
    else
{
    return 1;
}
}
int main()
{
    int n=3,f;
    f=fra(n);
    printf("%d", f);
    return 0;
}
