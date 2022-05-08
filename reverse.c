#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    for (int i=n; i; i--)
    printf("The reverse order is %d\n", i);
}