#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, guess, attempts = 1;
    srand(time(0));
    num = rand() % 100 + 1; // To generate a random number
    do
    {
        printf("Guess the Number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > num)
        {
            printf("Enter lower num\n");
        }
        else if (guess < num)
        {
            printf("Enter higher num\n");
        }
        else
        {
            printf("You guessed in %d attempts\n", attempts);
        }
        attempts++;

    }
    while (guess != num);
 return 0;
}