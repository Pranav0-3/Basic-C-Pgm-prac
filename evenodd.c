#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number to check if prime or odd:\n");
    scanf("%d", &a);
    if(a%2!=0)
    { 
        printf("The Number is odd\n"); 
    }
    else 
    {
        printf("The Number is even\n");
    }
        
}