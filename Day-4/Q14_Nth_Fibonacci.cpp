#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter position (n): ";
    cin >> n;

    if (n == 0) {
        cout << "Nth Fibonacci Term: 0";
        return 0;
    }

    long long a = 0, b = 1;

    for (int i = 2; i <= n; i++) {
        long long nextValue = a + b;
        a = b;
        b = nextValue;
    }

    cout << "Nth Fibonacci Term: " << (n == 1 ? 1 : b);

    return 0;
}
