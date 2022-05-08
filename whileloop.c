#include<stdio.h>
void main()
{
    int i;
    printf("Enter a value:\n");
    scanf("%d", &i);

    while(i<=10)
    {
        printf("%d\n", i);
        i++;
    }
}