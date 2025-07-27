#include <stdio.h>

int factorial ( int n);

int main () {
    printf("Factorial of 5 is: %d\n", factorial(5));

return 0;
}

int factorial( int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}