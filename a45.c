#include<stdio.h>
int main(){
int i, total=1 , n=0;
printf("Enter number: ");
scanf("%d",&n);
while(n!=0){
total= total*n;
n=n-1;
}
printf("factorial is equal to : %d",total);
return 0;
}