#include <stdio.h>
void main()
{
    int i, n;
    printf("Enter the number for mulTable:\n");
    scanf("%d", &n);
    for (i = 10; i; i--)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}