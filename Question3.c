/*3. Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)*/
#include<stdio.h>
int EVENODD(int);
int main()
{
  int a,N;
    printf("Enter the value of a : \n ");
    scanf("%d",&a);
   N=EVENODD(a);

     printf(" return %d",N);
     return 0;
}
int EVENODD(int i )
{
   
    if (i%2==0)
    return 1;
    else
    return 0;
  

}
