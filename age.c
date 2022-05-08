#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the age of a Man:\n");
    scanf("%d",&a);
    printf("Enter the age of a Women:\n");
    scanf("%d",&b);
    if(a>21 && b>18)
    {
        printf("Its a legal age and You both can marry:)\n");
    }
    else 
    {
        printf("Underage cannot be married:(\n");
    }
    
}