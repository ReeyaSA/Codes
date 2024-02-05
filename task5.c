int main()
{
    int m ,n ;
    int i, j;
    printf("enter number of rows");
    scanf("%d",&n);
   printf("enter number of columns");
    scanf("%d",&m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            printf(" ");
        }
        for(j=0; j<m; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
