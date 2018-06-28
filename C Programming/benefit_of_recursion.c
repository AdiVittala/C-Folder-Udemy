//Using the memory stack instead of creating our own stack.
//Function to convert from decimal to binary. Divide the number by 2 and write the remainder of the division operation in the reverse order.
//For the purpose of storing the remainder's we will use system memory stack.

#include<stdio.h>
void decToBin(unsigned int n){ //Return datatype is usually void when using recursion.
    if(n==1){
        printf("1");
        return;
    }
    decToBin(n/2);
    printf("%d", n%2);
}

int main(){
    decToBin(12);
    return 0;
}
