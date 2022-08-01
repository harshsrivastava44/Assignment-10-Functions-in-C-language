/*7. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)*/
#include<stdio.h>
int Factnum(int);
int comb(int,int);
int main()
{
    int x,r;
    printf("Enter the numbers:\n ");
    scanf("%d%d",&x,&r);
    
   printf("The number of combinations are is %d ",comb(x,r));
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
int comb(int n,int r)
{   
    int c;
    if (n>r)
   c=Factnum(n)/(Factnum(r)*Factnum(n-r));
   

    return c;
}