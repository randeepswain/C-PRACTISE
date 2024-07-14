/*
We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Define the range
    int lower = 1;
    int upper = 100;
    int guess, attempt = 0;

    // Generate a random number within the specified range
    int randomNumber = (rand() % (upper - lower + 1)) + lower;

    do
    {
        printf("guess the Number ");
        scanf("%d", &guess);
        attempt++;
        if (guess > randomNumber)
        {
            printf("LOWER NUMBER PLEASE\n", guess);
        }
        else if (guess < randomNumber)
        {
            printf("HIGHER NUMBER PLEASE\n", guess);
        }
    } while (guess != randomNumber);
    printf("You have guessed the number %d correctly in %d attempts!!", randomNumber, attempt);
    return 0;
}