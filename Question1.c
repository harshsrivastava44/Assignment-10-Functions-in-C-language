//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float Area(float);
int main()
{
    float a;
    printf("Enter the value of a : \n ");
    scanf("%f",&a);
     Area(a);
     printf("Area of circle is  %0.2f",Area(a));
     return 0;
}
float Area(float r)
{
    float A;

    A=3.14*r*r;
    return A;

}
