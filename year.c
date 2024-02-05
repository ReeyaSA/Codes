#include<stdio.h>
int main()
{
int year;
printf("Enter any year? ");
scanf("%d",&year);

if(year % 4 == 0)
{
	printf("IS LEAP YEAR");
	}

else if (year % 4 == 1){
	printf("leap year will come after one year");
}

else if(year % 4 == 2){
	printf("leap year will come after two years");
	}

else{
	printf("leap year will come after three years");
	}

return 0;
}
