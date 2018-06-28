// A function that calls itself is called a recursive function
// For recursive function the terminating condition is important or else recursive call will be indefinite number of times.
// REcursive printing for finite number of times.

// Tail recursion is when the recursive call is the last statement call and there is no overhead for the OS to store following instructions after the function call in to a stack. Since
// recursive function call is the last statement called nothing gets stored in the stack other then the main program statements. In such case(function call is the last statement), recursive function calls
// is helpful than an iterative function call.

#include<stdio.h>

void printMsg(unsigned int n){
    if(n==0)
        return;

    printf("Hello World \n");
    n--;
    printMsg(n); //recursive calling of the function
    }

int main(){
    printMsg(3);
    return 0;
}
