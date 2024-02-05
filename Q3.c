#include<stdio.h>
int main()
{
int windspeed=0;
printf("Enter the speed of wind: ");
scanf("%d",&windspeed);
if(windspeed<25)
{printf("Not a strong wind");}
else if(windspeed<=38)
{printf("strong wind");}
else if(windspeed<=54)
{printf("gale");}
else if(windspeed<=72)
{printf("whole gale");}
else 
{printf("Hurricane");}
return 0;
}
