#include <stdio.h>
#include <math.h>

int sumofn(int n);

int main () {
    int result = sumofn(5);
    printf("Sum of first 5 natural numbers is: %d\n", result);
    return 0;
}
int sumofn(int n) {
    if (n ==1 ) {
        return 1;
    }
    return n + sumofn(n - 1);
}

