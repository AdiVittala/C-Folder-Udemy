#include<stdio.h>

/*int main(){
    int x = 10;
    int *p;
    p = &x;

    printf("Content of p is: %lu\n", p);
    p += 5; //This increments the contents of p by 5*4 = 20. Since p is in integer pointer and int is 4 bytes long. Adding 5 takes it forward by 5 4 bytes spaces, which is 20.
    printf("Content of p now is: %lu\n", p);
    return 0;
}
*/
//Pointer arithmetic on pointers: current content of pointer + c*sizeof(type of pointer)


int main(){
    double *p = (double *)10000; //Here 10000 is int but it is type casted double
    double *q = (double *)2000;

    printf("%d\n", p-q); // Here we are subtracting the address between 10000 and 2000 to know how my double values can be stored between these two address spaces. Number of double values that can be
    // stored between these two address spaces is (10000-2000)/8, since double is of length 8.
    return 0;
}
