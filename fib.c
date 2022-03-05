#include<stdio.h>
int fib(int n) {
    return n == 0 || n == 1 ? 1 : fib(n - 1) + fib(n - 2);
}
int main() {
    for (int i = 0; i < 10; i++) {
        printf("fib(%d) = %d\n", i, fib(i));
    }
    return 0;
}