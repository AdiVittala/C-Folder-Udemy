//While using the concept of pointers and arrays and passing arrays to a function, we only need to pass the base address which is contained in the array variable, so pass array variable and number
// of array elements to the function call. Base address in the function should be received in a pointer. pointer type depends on the type of elements in the array.

#include<stdio.h>

/*
*Example of passing 1-D array to function
*
*/

void printArray(int *p_arr, int n){
    int i;
    printf("Content of the array:");
    for(i=0;i<n;i++){
        printf("%4d", *(p_arr+i));
    }
    printf("\n");
}

int main(){
    int x[] = {10, 20, 30, 40, 50};
    int y[] = {1,2,3,4,5,6};
    printArray(x, 5);
    printArray(y, 6);
    return 0;
}
