// When we need to return more than one value from a function, this can be achieved using pointers

#include<stdio.h>

void doWork(int a, int b, int c, int *p, int*q){
    *p = a+b+c; //manipulating the address location. or storing the sum of a, b and c in address location held by p.
    if(a>b && a>c)
        *q = a;
    else if(b>c)
        *q = b;
    else
        *q = c;
}

int main(){
    int x = 10, y = 50, z = 15, sum, max;
    doWork(x,y,x,&sum,&max);
    printf("Sum = %d, Max = %d", sum, max);
    return 0;
}
