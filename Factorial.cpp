#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

// Function to calculate factorial using an array
void factorialArray(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return;
    }

    long long fact[n + 1];
    fact[0] = 1;

    auto start = high_resolution_clock::now();
    for (int i = 1; i <= n; i++) {
        fact[i] = fact[i - 1] * i;
    }
    auto stop = high_resolution_clock::now();

    cout << "Factorial of " << n << " = " << fact[n] << endl;
    cout << "Time taken: " << duration_cast<microseconds>(stop - start).count() << " microseconds\n";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    factorialArray(n);
    return 0;
}
