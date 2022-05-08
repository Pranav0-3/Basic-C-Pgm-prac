# include <stdio.h>
void main()
{
    int i;
    printf("Enter the Year:\n");
    scanf("%d", &i);

    if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
        printf("It's a Leap year");
    else
        printf("It's a common year");
}