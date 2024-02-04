#include<stdio.h>
main()
int calculateDeliveryCharges(int purchaseAmount) {
  if (purchaseAmount > 1000) {
    return 0;
  } else {
    return 150;
  }
}
int deliveryCharges = calculateDeliveryCharges(800);

