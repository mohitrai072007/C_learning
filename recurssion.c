#include <stdio.h>

void printhelloworld(int count);

int main () {
printhelloworld(5);


    return 0;
}
//recurssive function kahte hai jo apne aap ko call karta hai
// isme base case aur recursive case dono hote hai
// base case wo hota hai jisme recursion khatam ho jata hai
// recursive case wo hota hai jisme recursion continue hota hai
void printhelloworld(int count){
    if (count <= 0) {
        return;
    }
    printf("Hello World\n");
    printhelloworld(count - 1);
}
