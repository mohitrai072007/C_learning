#include <stdio.h>
#include <math.h>


void printNumbers(int arr[], int size);
int main () {
    int arr[] = {1, 2, 3, 4, 5};
    printNumbers(arr, 5);

    return 0; 
}

void printNumbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}