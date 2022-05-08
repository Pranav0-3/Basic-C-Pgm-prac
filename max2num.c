#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 nums to find the max:\n");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("num %d is greater than num %d", a,b);
    else
    printf("num %d is greater than num %d", b,a);
    return 0;
}