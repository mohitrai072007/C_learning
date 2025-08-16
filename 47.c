#include <stdio.h>

void printStrings(char arr[]);

int main() {
    char firstName[] = "mohit";
    char lastName[] = "rai ji";

    printStrings(firstName);
    printStrings(lastName);
    return 0;
}

void printStrings(char arr[]) {
    for(int i = 0; arr[i] != '\0'; i++) {
        printf("%c" , arr[i]);
    }
    printf("\n");
}