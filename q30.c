#include <stdio.h>
#include <math.h>
 float squarearea( float side);
float circlearea( float radius);
float rectanglearea (float l , float b);

 int main() {
float a =5.0;
float b = 10.0;
printf("area of rectangle : %f", rectanglearea(a, b));


    return 0;
 }


 float squarearea( float side) {
    return side * side;
}
float circlearea(float radius) {
   return 3.14 * radius * radius;
}
float rectanglearea(float l, float b) {
    return l * b;
}