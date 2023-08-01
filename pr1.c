#include <stdio.h>

int main() {
    int num1, num2, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num1);
    num2 = num1;
    while (num2 != 0) {
        remainder = num2 % 10;
        result += remainder * remainder * remainder;
        num2 /= 10;
    }
    if (result == num1)
        printf("%d is an Armstrong number.", num1);
    else
        printf("%d is not an Armstrong number.", num1);
    return 0;
}
