#include <stdio.h>
int main() {
    int num1, Num2, num3, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num1);
    Num2 = num1;

    while (Num2 != 0) {
       // num3 contains the last digit
        num3 = Num2 % 10;
        
       result += num3 * num3 * num3;
        
       // removing last digit from the orignal number
       Num2 /= 10;
    }

    if (result == num1)
        printf("%d is an Armstrong number.", num1);
    else
        printf("%d is not an Armstrong number.", num1);

    return 0;
}