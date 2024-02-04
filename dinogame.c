#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH 40
#define HEIGHT 20

char screen[HEIGHT][WIDTH];  // The game screen
int dinoX;  // The x-coordinate of the dino

// Initializes the game screen and dino's starting position
void initializeScreen();

// Prints the current state of the game screen
void printScreen();

// Updates the game screen by moving the dino and obstacles
void updateScreen();

// Moves the dino to the left
void moveDinoLeft();

// Moves the dino to the right
void moveDinoRight();

int main() {
  srand(time(0));  // Seed the random number generator

  initializeScreen();

  while (1) {
    printScreen();
    updateScreen();
    int ch = getchar();
    if (ch == 'a') {
      moveDinoLeft();
    } else if (ch == 'd') {
      moveDinoRight();
    }
    usleep(100000);  // Sleep for 0.1 seconds
  }

  return 0;
}

void initializeScreen() {
  int i, j;
  for (i = 0; i < HEIGHT; i++) {
    for (j = 0; j < WIDTH; j++)
  }
