// No data type present in C to hold a string value in primary memory.
// We have to use a one dimensional character array to hold string in primary memory

#include <stdio.h>
#include<string.h>

int main() {
    //char str[80] = "Hello World"; // To mark the end of array, the compiler is going to append a null character at the end, represented as \0
    char str[80];

    //str = "Hello World"; // this is an illegal operation. In order to assign a value to str array after declaration we need to use the strcpy library function
    strcpy(str, "Hello World");

    printf("Message is: %s\n", str); // Compiler will start printing from the first character in the array when it sees the format specifier %s(character array format specifier) and will stop
    //printing when it encounters the NULL character
    return 0;
}
