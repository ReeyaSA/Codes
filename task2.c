#include<stdio.h>

int main()
{
    int num, i;
    printf("Enter the limit to print binary numbers: ");
    scanf("%d", &num);
  printf("All binary numbers from 0 to %d are: \n", num);
    for (i = 0; i <= num; i++)
    {
        printf("%d  ", i);
        int binary = 0, rem, j = 1;
        int n = i;
        while (n != 0)
        {
            rem = n % 2;
            num = n / 2;
            binary = binary + rem * j;
            j = j * 10;
        }
        printf("%d\n", binary);
    }
    return 0;
}
