#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int original = number;
    int digitCount = 0;
    int temp = number;

    while (temp > 0) {
        digitCount++;
        temp /= 10;
    }

    temp = number;
    int sum = 0;

    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digitCount);
        temp /= 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong Number.";
    else
        cout << original << " is not an Armstrong Number.";

    return 0;
}
