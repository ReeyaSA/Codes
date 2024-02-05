#include<stdio.h>
#include<math.h>
int main()
{
   int num,i,j; 
    printf("enter the limit: ");
    scanf("%d",&num); 
    for(i=0;i<num;i++) //outer loop//
    {
        for(j=0;j<num;j++) // inner loop//
        {
            if(i==j)
            {
                printf("%d",0);
            }
            else if(j==num)
            {
                printf("%d",0);
            }
            else
            {
                printf("%d",abs(i-j));//  absolute value (- to +)//
            }
        }
            printf("\n");

    }
}

