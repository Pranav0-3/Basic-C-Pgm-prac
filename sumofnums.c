#include<stdio.h>
void main()
{
    int i, sum=0, n;
    printf("Enter to starting num:\n");
    scanf("%d",&i);
    printf("Enter the num who want to calculate till:\n"); 
    scanf("%d",&n);
    for(i;i<=n;i++)
    {
        sum += i;
    }
        printf("The sum of your num is:%d\n",sum);
}