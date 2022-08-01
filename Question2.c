//2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float SI(float,float,float);
int main()
{
    float P,R,T;
    printf("Enter the value of principal p : \n ");
    scanf("%f",&P);
     printf("Enter the value of Interest Rate : \n ");
    scanf("%f",&R);
     printf("Enter the value time years T : \n ");
    scanf("%f",&T);
     SI(P,R,T);
     printf("the simple intrest is  %0.2f",SI(P,R,T));
     return 0;
}
float SI(float P,float R,float T)
{
    float si;
    si=(P*R*T)/100;
   
    return si;

}
