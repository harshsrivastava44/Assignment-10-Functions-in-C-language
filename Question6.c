//6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int Factnum(int);
int main()
{
    int x;
    printf("Enter the number:\n ");
    scanf("%d",&x);
   printf("The factorial of %d is %d ",x,Factnum(x));
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