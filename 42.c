#include <stdio.h>
int countOdd(int arr[], int size);

int main () {
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
printf("%d" , countOdd(arr , 6));


return 0;

}

int countOdd(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) { //odd number check
            count++;
        }
    }
    return count;
}
