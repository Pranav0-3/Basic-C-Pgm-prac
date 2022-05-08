#include<stdio.h>
void main()
{
    float c,f; // c is Celcuis and f is faren
    printf("Enter the Temp is Celcuis:\n"); //To enter the Temp
    scanf("%f",&c); // user input
    f=(c * 9/5) + 32; // Formula for temperature
    printf("The temp in Faren is:%f\n", f); // Output
}