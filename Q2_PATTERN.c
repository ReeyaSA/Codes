
#include <stdio.h>
 
int main()
{
  int a, b, c, rows;
 
  printf("Enter the no. of rows: ");
  scanf("%d", &rows);
 
  printf("Output: \n\n");

  for (a = 1; a <= rows; a++) // for upper half sandclock portion
  {
    for (c = 1; c < a; c++)
      printf(" ");
 
    for (b = a; b <= rows; b++)
      printf("* ");
 
    printf("\n");
  }
 
   for (a = rows - 1; a >= 1; a--) // for lower half sandclock portion
    for (c = 1; c < i; c++)
      printf(" ");
 
    for (b = a; b <= rows; b++)
      printf("* ");
 
    printf("\n");
  }
 
  return 0;
}
