//5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void Oddnum(int);
int main()
{
    int x;
    printf("Enter the number:\n ");
    scanf("%d",&x);
   Oddnum(x);
    return 0;
}
void Oddnum(int n)
{
    int i;
    for ( i = 1; i <=n; i+=2)
    {
       printf(" %d",i);
    }
    
    

}