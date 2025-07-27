#include <stdio.h>

void calculateprice(float value);

int main() {

    float value = 50;
    calculateprice(value);
    return 0;
}


void calculateprice(float value) {
    value = value + (0.18 * value);
    printf("final price is : %f\n", value);
}