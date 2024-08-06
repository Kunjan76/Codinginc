#include<stdio.h>
int fab(int n)
{
int i, a=0 ,b=1 ,c=1;
printf("The fabonacci series :");
for (i=0; i<=n; i++)
{
    printf("%5d",c);
    c =a+b;
    a=b;
    b=c;
}


}
void main()
{
    int n;
    printf("Enter the Number:\n");
    scanf("%d", &n);
    fab(n);
    
}