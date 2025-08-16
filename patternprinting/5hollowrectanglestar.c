#include <stdio.h>
int main (){
for (int i=0; i<4; i++){
    for (int j =0; j<=5; j++){
        if (i == 0 || i == 3 || j == 0 || j == 5) {
            printf("*");
        } else {
            printf(" ");
        }
    }
    printf("\n");
}
    return 0;
}