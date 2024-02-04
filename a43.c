#include<stdio.h>
int main(){
int num1=0 , num2=0 , sum1=0 , sum2=0 ;
char ch;
do{
printf("Enter first number: ");
scanf("%d",&num1);
printf("Enter second number: ");
scanf("%d",&num2);
sum1 = num1+num2;
sum2 = sum2+sum1;
printf("Do you want to continue? Y/N \n");
scanf(" %c",&ch);
}while(ch=='y' || ch=='Y');
printf("Sum is : %d",sum2);
return 0;
}
