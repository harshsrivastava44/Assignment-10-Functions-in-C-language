//9. Write a function to check whether a given number contains a given digit or not.(TSRS)
#include<stdio.h>
int dig(int,int);
int dig(int a,int b)
{
    int rem;

     while (a)
     {
       rem=a%10;
       if (rem==b)
       {
           printf("contains digit\n ");
        break;
       }
       a=a/10;


     }
     if (a==0)
     { printf("digit not contain\n");
        return 0;
     }
       return rem;
}
int main()
{
    int x,y;
    printf("Enter number :\n");
    scanf("%d",&x);
    printf("Enter digit :\n");
    scanf("%d",&y);
    printf("%d",dig(x,y));
    return 0;
}
