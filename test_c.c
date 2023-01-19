#include<stdio.h>

// Calculates the nth Fibonacci number.
// e.x. fib(10) = 55
int fib(int n) {
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; i++) {
        int temp = b;
        b = a+b;
        a = temp;
    }
    return a;
}

// Calculates the sum of all even fibonacci numbers up to an integer n.
// e.x. fib_sum_even(10) = 0 + 2 + 8 + 34 = 44
int fib_sum_even(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int f = fib(i);
        printf("%d\n", f);
        if(f%2 == 0) {
            sum+=f;
        }
    }
    return sum;
}

int main() {
    int n = 10;
    printf("fib_sum_even of %d: %d", n, fib_sum_even(n));
}