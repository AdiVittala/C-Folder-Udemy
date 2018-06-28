#include <stdio.h>

// Declaring a variable with const keyword will keep its value constant throughout the execution of a program
// Attempt to change its value during execution will cause the compiler to flag an error_category

int main(){
    const double PI = 3.14;
    // Name of an array is a pointer to base address of the array
    int x[] = {1,2,3}; // x here is constant pointer

    int *p;

    p = x;
    p++; //is a valid expression. Content of pointer p can be changed. Whereas x++ is invalid.

    int * const p;

    p = x; // This is invalid. Since p is a constant and assignment needs to happen at declaration and not after declaration.

    //Whereas
     int * const p = x;

     p++; // this is illegal
     (*p)++; // this is legal. Here we incrementing the value stored in the address location held by pointer variable p

     const int *p = x;

     p++; // this is legal. Here is p is not constant
     (*p)++; // this is illegal. Here the value(is constant) held in the address location pointed to by pointer p is a constant
     x[0]++ // this is valid. Value in 0th location can be incremented using the variable x but it cannot be incremented using the variable p.


    }
