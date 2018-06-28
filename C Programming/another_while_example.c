/* Write a program to print sum of numbers given from a keyboard
* by the user using while loop, you should terminate when the user
* inputs a negative number
*/

#include<stdio.h>

int main(){

    int sum, number;
    sum = 0;
    printf("Enter a number:");
    scanf("%d", &number);
    while(number>0){
        sum += number;
        printf("Enter a number:");
        scanf("%d", &number);
    }
    printf("Sum of numbers = %d", sum);
    return 0 ;
}
