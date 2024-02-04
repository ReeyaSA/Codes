#include<stdio.h>
int main() 
{
int number=0 , positive=0 , negative=0 , zero =0 ;
char cha;
do{
 printf("Enter number: ");
 scanf("%d",&number); 
if(number>0)
 positive++;
else if(number<0)
negative++;
else
zero++; printf("Do you want to continue? y/n \n");
 scanf(" %c",&cha);
 }while(cha=='y' || cha=='Y');
 printf("Total positive number: %d \n",positive);
 printf("Total negative number: %d \n",negative);
 printf("Total zeros: %d \n",zero);
return 0;
}