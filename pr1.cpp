#include <iostream>
using namespace std;

int main() {
    int num1, num2, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num1;
    num2 = num1;

    while (num2 != 0) {
        remainder = num2 % 10;

        result += remainder * remainder * remainder;
        num2 /= 10;
    }

    if (result == num1)
        cout << num1 << " is an Armstrong number.";
    else
        cout << num1<< " is not an Armstrong number.";

    return 0;
}
