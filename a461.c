#include<stdio.h>
int main(){
int number=0, bnum=0 , sum=0;
printf("Enter number: ");
scanf("%d",&number);
while(number>0){
bnum=number%10;
number=number/10;
sum = sum+bnum;
}
printf("The sum to number is equals to: %d",sum);
return 0;
}