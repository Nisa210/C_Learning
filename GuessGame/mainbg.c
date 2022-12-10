#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAX_NUMBER 100
#define MAX_TRIES 7

void clear_buffer() {
  char ch;
  while ((ch = getchar()) != '\n' && ch != EOF);
}

int main() {
  int guess = 0;
  int secret = 0;
  int tries = 0;
  bool game_won = false;

  srand(time(NULL));
  secret = rand() % MAX_NUMBER + 1;

  printf("Welcome to the guessing game!\n");
  printf("Enter a number between 1 and %d: ", MAX_NUMBER);

  while (tries < MAX_TRIES) {
    if (scanf("%d", &guess) != 1) {
      printf("Invalid input. Please enter a number between 1 and %d: ", MAX_NUMBER);
      clear_buffer();
      continue;
    }

    if (guess < 1 || guess > MAX_NUMBER) {
      printf("Invalid input. Please enter a number between 1 and %d: ", MAX_NUMBER);
      continue;
    }

    tries++;

    if (guess == secret) {
      game_won = true;
      break;
    } else if (guess < secret) {
      printf("Too low. Try again: ");
    } else {
      printf("Too high. Try again: ");
    }
  }

  if (game_won) {
    printf("You guessed it in %d tries! The secret number is %d\n", tries, secret);
  } else {
    printf("You ran out of tries. The secret number was %d\n", secret);
  }

  return 0;
}

