#include<stdio.h>
int main()
{
    int a; // interger value stored in a variable
    float b; // float value stored in b variable (contains "dot" eg 1.000)
    
    printf("Enter value of a:\n"); // print string(statement) within "---" as it is
    scanf("%d", &a); // user input // %d for interger(int)

    printf("Enter value of b:\n"); 
    scanf("%f", &b); // user input // %f for float (decimal) 

    printf("The value of a and b is %d and %0.1f", a, b); // %0.1f for single 0 after dot (.)
    return 0; // used only for "int main()" function

}