#include<stdio.h>
int mult_root(int n);
int main()
{
   int n , num, prod, rem, c;;
   printf("Enter any positive integer: ");
   scanf("%d", &n);
    num = n; 
    c = 0;
    while(num > 0)
    {
    prod = 1;
 while(num > 0)
        {
            rem = num % 10;
            prod *= rem;
            num /= 10;
        }

        num = prod;
        c++;
    }

   printf("Number persistency of %d is %d\n", n, c);
   printf("Multiplicative root of %d = %d\n",n, mult_root(n));
   return 0;
}

int mult_root(int n)
{
   int r, p = 1;

   while (n > 9)
   {
       while (n != 0)                                                                                            
       {
           r = n % 10;
           p = p * r;
           n = n / 10;
       }
       n = p;
       p = 1;
   }
   return n;
}