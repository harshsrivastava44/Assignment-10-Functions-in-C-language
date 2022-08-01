/*8. Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)*/
#include<stdio.h>
int Factnum(int);
int perm(int,int);
int main()
{
    int x,r;
    printf("Enter the value of n and r:\n ");
    scanf("%d%d",&x,&r);
   printf("The number of arrangements are is %d ",perm(x,r));
    return 0;
}
int Factnum(int n)
{
    int i,fact=1;
    for ( i = 1; i <=n; i++)
    {
        fact=fact*i;
      
    }
    return fact;
}
int perm(int n,int r)
{
    int c;
    if (n>r)
    c=Factnum(n)/Factnum(r);
    return c;
}