//4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void Naturalnum(int);
int main()
{
    int x;
    printf("Enter the number:\n ");
    scanf("%d",&x);
    Naturalnum(x);
    return 0;
}
void Naturalnum(int n)
{
    int i;
    for ( i = 1; i <=n; i++)
    {
       printf(" %d",i);
    }
    
    

}