#include <stdio.h>

int main(void) {
  int n, i, j;
  
  // Get input from the user
  printf("Enter a number: ");
  scanf("%d", &n);
  
  i = 1;
  while (i <= n) {
    // Print i number of i's
    j = 1;
    while (j <= i) {
      printf("%d", i);
      j++;
    }
    
    // Print i - 1 number of commas
    j = 1;
    while (j < i) {
      printf("");
      j++;
    }
    
    // Move to the next line
    printf("\n");
    
    // Increment i
    i++;
  }
  
  return 0;
}