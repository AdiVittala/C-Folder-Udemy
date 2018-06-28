//This function implements recursive function but does not implement tail recursion

//This recursive call needs stack to be populated with the statements that will be implemented after the function call
//This program prints numbers from 1 through 3

void printNo(unsigned int n){
    if(n==0)
        return;

    printNo(n-1); //Here value of n does not change only value passed to the function changes. When the function is called in this case value of current value of n is preserved in the stack. So current value
    //which is 3 is pushed in to the stack. When the function is called again value of n which is 2 is stored in the stack and function is called again, which in this case is 1. When n becomes 0,
    //return statement looks in to the stack to return the control to the previous called function or previous location in the program. So when the control returns it starts executing the print statement.
    printf("%d\n", n);
}


int main(){
    printNo(3);
    return 0;
}


//There is an over-head with regards to implementing the stack with in the memory. Sometimes the stack build can become beyond what can be stored in the memory and can run in to stack overflow problems
//Recursion is helpful when implementation of stack is necessary in a program in which case by using recursion we are using the system(OS) in built stack.
