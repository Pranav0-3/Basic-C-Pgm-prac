#include<stdio.h> 
float avg(int a, int b, int c);
void main()
{
    int a,b,c;
    printf("Enter the marks of a:\n");
    scanf("%d", &a);
    printf("Enter the marks of b:\n");
    scanf("%d", &b);
    printf("Enter the marks of c:\n");
    scanf("%d", &c);
    printf("The avg of a,b,c is:%0.3f\n",avg(a,b,c)); 

}

float avg(int a, int b, int c)
{
    float results;
    results = (float)(a + b + c) / 3;
    return results;
}