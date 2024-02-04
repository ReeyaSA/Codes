#include<stdio.h>
int main(){
int i=0, j=1 , k=0 , n=0;
printf("Enter nth number ");
scanf("%d",&n);
printf("Fibonacci series = ");
while(i<=n){
printf("%d ",i);
k = i+j;
i = j;
j = k;
}
return 0;
}
