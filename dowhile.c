#include<stdio.h>
void main()
{
    int i=0;
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    do{
        printf("The number is %d\n",i);
        i++;
    }while(i<n);

}