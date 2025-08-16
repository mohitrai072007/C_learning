#include <stdio.h>


int main () {
//2d arrays //declare int arr [][] = {{1 ,2 } , {3, 4}};
//access arr[0][0] = 1;
//arr[1][0] = 3;
//arr [0][1] = 2;
//arr[1][1] = 4;

int marks [2][3]; //2d array with 2 rows and 3 columns
int marks [0][0] = 90; //first row first column
int marks [0][1] = 80; //first row second column
int marks [0][2] = 70; //first row third column


int marks [1][0] = 60; //second row first column
int marks [1][1] = 50; //second row second column
int marks [1][2] = 40; //second row third column

printf("%d", marks[0][0]); //prints 90

    return 0;
}