#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   
    srand(time(0));

    int random_number = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    printf("Welcome to the Number Guessing Game!\n");

    do {
        printf("Guess a number between 1 and 100: ");
        scanf("%d", &guessed);
        no_of_guesses++;

        if (guessed < random_number) {
            printf("Too low! Try again.\n");
        } else if (guessed > random_number) {
            printf("Too high! Try again.\n");
        }
    } while (guessed != random_number); 
    printf("Congratulations! You guessed the number %d in %d attempts.\n", random_number, no_of_guesses);
    return 0;
}
