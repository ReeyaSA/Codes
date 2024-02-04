#include<stdio.h>
int main()
{
 int n,i;
 float sum=0,x;
 printf("finding the sum of the series ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 x = 1 / i*i ;
 printf("1/%d^%d = %f\n", i, i, x);
 sum=sum+x;
 }
 printf("the sum of the series is %f",sum);
 return 0;
}