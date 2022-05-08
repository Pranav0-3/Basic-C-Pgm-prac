// Without recursion
#include <stdio.h>
int main()
{
    int a = 0, b = 1, c, i, num;
    printf("Enter the no. of elements:\n");
    scanf("%d", &num);
    printf("\n%d\n%d\n", a, b); // for printing 0 and 1
    for (i = 2; i <= num; ++i)
    {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }
    return 0;
}
