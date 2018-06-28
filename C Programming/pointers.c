#include<stdio.h>
// Multiplication and Division is not allowed to be done with pointer variables. But you can do addition and subtraction. Type of pointer variables is unsigned long
int main(){
    int var = 5;
    int *p; // Here is p is called the pointer. It is a variable used to store the address of a memory location storing a variable of type int. If floating point number needs to be stored, then we define a floating point pointer.
    //We have different types of pointers because the size of the variables we are storing is different. Pointer stores the starting address location of where a variable is stored in memory.
    printf("%p\n", &var);// %p is the format specifier while printing the address of memory location of a variable %p prints the value in hexadecimal format. & sign is used to access the address of the memory location where the variable var is stored.
    p = &var; //storing the address location of variable var
    *p = 10; // This is memory dereferencing. Which means we are manipulating the contents of the memory location referenced by p to hold the value 10. That means if p refers to the address location 7153, then this statement stores the value 10 in the memory location 7153
    // * is the dereferencing operator

    int x = 100;
    int *p, *q; // Pointers are also stored in the stack in the memory.
    int **k;// Pointer to pointer. Which it stores the address of the pointer which is storing the address of an integer variable. Here we can consider k to store address of pointer p which stores address of variable x in memory.
    k = &p;
    printf("%d\n", **k); //Here we are accessing the variable x or value of variable x which is 100.
    p = &x; //Address of x is stored in p.
    return 0;
}
