#include<stdio.h>

int main(){
    int x[] = {10,20,30,40,50};
    printf("%p, %p\n", x, &x[0]);
    int i = 0;
    printf("\nContent of the array is: \n");
    for(i=0;i<5;i++){
            printf("%4d", *(x+i));//*(x+i) gives the contents of the ith address location. Another way to access the elements of the array. This is equivalent to accessing the array using the
            // x[i] notation. (x+i) is the address of the ith location in the array and *(x+i) is the content of the ith address location.
    }
    printf("\n");

    return 0;
}
