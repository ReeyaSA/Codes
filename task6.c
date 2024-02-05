#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("enter number of rows");
    scanf("%d",&n);
   printf("enter number of columns");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||i==m||j==1||j==n)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
