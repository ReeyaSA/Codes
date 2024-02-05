#include<stdio.h>
int main()
{
int year=0;
printf("Enter any year? ");
scanf("%d",&year);

if(year % 400 == 0)
{printf("IS LEAP YEAR",&year);}

else if (year % 100 == 0)
{(printf(" IS NOT A LEAP YEAR", &year);}

else if(year % 4 == 0)
{printf(" IS NOT A LEAP YEAR",&year);}

else
{printf("IS NOT A LEAP YEAR",&year);}

return 0;
}
