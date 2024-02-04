#include <stdio.h>
int main()
{
 int i,num, cube=0;
 printf("Input number of terms : ");
 scanf("%d", &num);
 for(i=1;i<=num;i++)
 {
cube=i*i*i;
printf("Cube of number %d is equals to :%d \n",i, cube);
 }
return 0;
}