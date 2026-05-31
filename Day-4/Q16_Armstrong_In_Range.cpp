#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int original = num;
    int digits = 0;
    int temp = num;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    int total = 0;

    while (temp > 0) {
        int digit = temp % 10;
        total += pow(digit, digits);
        temp /= 10;
    }

    return total == original;
}

int main() {
    int start, end;

    cout << "Enter starting value: ";
    cin >> start;

    cout << "Enter ending value: ";
    cin >> end;

    cout << "Armstrong Numbers in Range: ";

    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
