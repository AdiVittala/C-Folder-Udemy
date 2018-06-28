#include <stdio.h>

int main(){
    int i, sum, n;
    printf("Enter a number n:\n");
    scanf("%d", &n);
    sum = 0;
    i = 1;
    while(i<=n){
        //sum = sum + i;
        //i++; OR
        //sum = sum +i++;  //Here sum +i is evaluated first and then i is incremented. It has the same effect as the above the lines of code.
        // OR
        sum += i++; //This has the same effect as the above statement
    }
    printf("%d\n", sum);
    return 0;
}
