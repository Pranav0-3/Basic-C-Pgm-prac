#include<stdio.h>
void main()
{
    int p,r,t;
    printf("Enter the P amt:\n"); // the principal amt
    scanf("%d", &p); // user input
    printf("Enter the Rate of intrest:\n"); // the rate of intrest
    scanf("%d", &r); // user input
    printf("Enter the Time:\n"); //time period
    scanf("%d", &t); // user input
     int a=((p*r*t)/100); // the formula
    printf("The S.I is:%d",a); // the output
}