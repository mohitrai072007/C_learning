#include <stdio.h>

void printStrings(char arr[]);

int main() {
    char firstName[50];
   scanf("%s", firstName);
   printf("First Name: %s\n", firstName);
    char lastName[50];
   scanf("%s", lastName);
   printf("Last Name: %s\n", lastName);
    return 0;
}

void printStrings(char arr[]) {
    for(int i = 0; arr[i] != '\0'; i++) {
        printf("%c" , arr[i]);
    }
    printf("\n");
}
