#include<stdio.h>

int fib(int n) {
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; i++) {
        int temp = b;
        b = a+b;
        a = temp;
    }
    printf("%d\n", a);
    return b;
}

int fib_sum_even(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int f = fib(i);
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