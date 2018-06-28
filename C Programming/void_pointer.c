// A void pointer can be used to store address of any type of data but it cannot be used to dereference the
// address. It can be used to access contents stored in the particular address location it represents. This is because
// void pointer does not have any information regarding the type of data it is storing.

#include<stdio.h>

int main(){
    void *vp;
    int x = 100;
    vp =&x;

    //printf("%d\n", (*vp)); // This is an illegal operation but instead of this the following statement can be used.
    printf("%d\n", *((int *)vp)); // We are explicitly typecasting the void pointer to be of type integer. If we want to do address arithmetic, first the void pointer has to correctly typecasted before doing address arithmetic
    // We need to use void pointer to store address location whose type is not known. Not every time is the address type known and in such a case the address is stored using a void pointer.

    return 0;
}
