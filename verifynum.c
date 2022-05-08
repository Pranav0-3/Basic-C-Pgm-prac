#include<stdio.h>
int main()
{
    int i;
    printf("Enter any num to check whether its positive, negative or zero:\n");
    scanf("%d", &i);
    if(i==0)
    printf("The num is zero\n");
    else if (i>=0)
    printf("The num is Positive\n");
    else 
    printf("The num is Negative\n");
    return 0;
}