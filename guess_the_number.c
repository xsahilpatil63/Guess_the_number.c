#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    int lower = 1, upper = 1000;  // The range for the number

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between lower and upper
    number = (rand() % (upper - lower + 1)) + lower;

    printf("Welcome to the Guess the Number game!\n");
    printf("I have chosen a number between %d and %d. Try to guess it!\n", lower, upper);

    // Loop until the player guesses the correct number
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations 🎉! You guessed the correct number in %d attempts.\n", attempts);
        }
    } while (guess != number);

    return 0;
}