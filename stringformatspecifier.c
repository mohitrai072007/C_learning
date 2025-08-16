#include <stdio.h>

void PrintString(char arr[]);   

int main() {
    // String format specifier example
    // %s is used to print strings
    char name[50];
    scanf("%s", name);
    printf("Name: %s\n", name);
    return 0;
}   

void PrintString(char arr[]) {
    for(int i = 0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
}