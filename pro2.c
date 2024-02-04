#include<stdio.h>
int lsd(int x);
int msd(int y);
int main()
{
    int number=0, result=0;
     printf("==========================\n");
     printf("\nEnter a three digit number: ");
     scanf("%d", &number);

    result = lsd(number);
     
     printf("LSD is %d ", result);

     result = msd(number);
     printf("MSD is %d ", result);
     printf("==========================\n");
     return 0;
}
int lsd(int number)
{
    
    number = number % 10;

    return number;
}
int msd(int number)
{
    return number;
}