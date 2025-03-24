#include <stdio.h>
int factorial(int n) { return (n <= 1) ? 1 : n * factorial(n - 1);\n}
int fibonacci(int n) {if (n <= 1) return n;\n    return fibonacci(n - 1) + fibonacci(n - 2);}
int main() {
    printf("Hello, World!\n");
    return 0;
}

