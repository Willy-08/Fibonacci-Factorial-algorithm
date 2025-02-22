
# fibonacci--factorial-algorithm-design
Fibonacci series and factorial codes using C++ to show algorithm design

# REG NUMBER: EB3/61517/22
# NAME: William Waiganjo

# FactorialArray.cpp
## Detailed Explanation:
### Function factorialArray(int n):
- This function calculates the factorial of n using an array.
- It initializes an array `fact[n+1]` where `fact[0] = 1`.
- It iteratively calculates each factorial value from `1` to `n` using `fact[i] = fact[i-1] * i`.
- If `n` is negative, it displays an error message.

### Main Function:
- Asks the user to input a non-negative number.
- Calls `factorialArray(n)` to compute and display the factorial value.
- Measures execution time using `chrono`.

# FibonacciArray.cpp
## Detailed Explanation:
### Function fibonacciArray(int n):
- This function calculates the Fibonacci sequence up to `n` terms using an array.
- The first two terms are initialized as `fib[0] = 0` and `fib[1] = 1`.
- Each subsequent term is calculated using `fib[i] = fib[i-1] + fib[i-2]`.
- If `n` is non-positive, it displays an error message.

### Main Function:
- Asks the user for the number of terms in the Fibonacci series.
- Calls `fibonacciArray(n)` to compute and display the Fibonacci sequence.
- Measures execution time using `chrono`.

# Design of Algorithms:
### Fibonacci Series:
- **Time Complexity:** O(n) — Since each term is computed only once.
- **Space Complexity:** O(n) — Due to the storage of all Fibonacci terms in an array.

### Factorial:
- **Time Complexity:** O(n) — We iteratively compute each factorial value.
- **Space Complexity:** O(n) — The array stores all computed factorial values.

