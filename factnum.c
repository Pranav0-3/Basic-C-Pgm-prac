#include <stdio.h>
void main()
{
    int i, n, fact = 1;
    printf("Enter the number you want factorial of:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is:%d", n, fact);
}