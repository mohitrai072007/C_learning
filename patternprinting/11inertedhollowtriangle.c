#include <stdio.h>

int main (){

for(int i= 4; i >= 1; i--) {
    for(int j = 1; j <= 4 - i; j++) {
        printf(" ");
    }
    for(int j = 1; j <= 2*i-1; j++) {
        if (j == 1 || j == 2*i-1 || i == 4) {
            printf("*");
        } else {
            printf(" ");
        }
    }
    printf("\n");
}
    return 0;
}