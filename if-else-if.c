#include <stdio.h>
int main()
{
    int num;
    printf("Enter the num between 0-6:\n");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Its Sunday\n");
    }
    else if (num == 1)
    {
        printf("Its Monday\n");
    }
    else if (num == 2)
    {
        printf("Its Tuesday\n");
    }
    else if (num == 3)
    {
        printf("Its Wednesday\n");
    }
    else if (num == 4)
    {
        printf("Its Thursday\n");
    }
    else if (num == 5)
    {
        printf("Its Friday\n");
    }
    else if (num == 6)
    {
        printf("Its Saturday\n");
    }
    else
    {
        printf("Invalid Day of the Week, enter a valid num");
    }

    
}