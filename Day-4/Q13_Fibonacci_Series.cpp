#include <iostream>
using namespace std;

int main() {
    int terms;

    cout << "Enter number of terms: ";
    cin >> terms;

    long long first = 0, second = 1;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < terms; i++) {
        cout << first << " ";

        long long nextTerm = first + second;
        first = second;
        second = nextTerm;
    }

    return 0;
}
