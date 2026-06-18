#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;

    srand(time(NULL));
    number = rand() % 100 + 1;

    printf("Guess a number (1-100): ");

    do {
        scanf("%d", &guess);

        if(guess > number)
            printf("Too High!\n");
        else if(guess < number)
            printf("Too Low!\n");

    } while(guess != number);

    printf("Congratulations! Correct Guess.\n");

    return 0;
}

