#include<stdio.h>
int deliverycharge(int amount);
int main()
{
 int amt=0, charge=0;

 printf("\nEnter user's purchase amount: ");
 scanf("%d", &amt);

 charge = deliverycharge(amt);

    printf("========================\n");
    printf("Delivery Charges: %d Rs\n", charge);
    printf("========================\n");
    
    return 0;
}

int deliverycharge(int amt)
{
    int charge = 0;

    if (amt >= 0 && amt <= 1000)
    {
        charge = amt + 150;
    }
    else
    {
        charge = amt;
    }
     
     return charge;
}