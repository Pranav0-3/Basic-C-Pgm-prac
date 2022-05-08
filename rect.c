#include<stdio.h>
int main()
{
    float l,b,h;
    printf("Enter the Length:\n");
    scanf("%f", &l);
    printf("Enter the Breadth:\n");
    scanf("%f",&b);
    printf("Enter the Height:\n");
    scanf("%f", &h);
    printf("Area of Rectangle is %f",l*b*h);
    return 0;
}