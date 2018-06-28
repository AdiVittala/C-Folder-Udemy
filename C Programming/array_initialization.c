#include<stdio.h>

int main(){
    //int x[3] = {0}, i; //If array is not initialized explicitly, then the array will hold garbage values. In order to initialize the array when it is
    //declared, the following like the above statement needs to be done. In this case all elements are initialized with 0. If different values need to assigned to the array elements
    // the statement below need to be done
    int x[3] = {0, 2, 3}, i;
    printf("Printing elements of the array:\n");
    for(i=0;i<3;i++){
        printf("%d\n", x[i]);
    }
    return 0;
}
