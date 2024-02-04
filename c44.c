#include<stdio.h>
int main(){
int number=0, rnumber=0;
printf("Enter number: ");
scanf("%d",&number);
while(number>0){
rnumber= rnumber*10;
rnumber = rnumber+number%10;
number=number/10;
}
printf("Reverse order of this number is : %d ",rnumber);
return 0;
}
