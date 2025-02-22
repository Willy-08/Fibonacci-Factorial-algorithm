#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

// Function to generate Fibonacci series using an array
void fibonacciArray(int n) {
    if (n <= 0) {
        cout << "Please enter a positive integer.";
        return;
    }

    int fib[n];
    fib[0] = 0;
    if (n > 1) fib[1] = 1;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fib[i];
        if (i < n - 1) cout << ", ";
    }
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    auto start = high_resolution_clock::now();
    fibonacciArray(n);
    auto stop = high_resolution_clock::now();

    cout << "\nTime taken: " << duration_cast<microseconds>(stop - start).count() << " microseconds\n";
    return 0;
}
