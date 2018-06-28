/* Develop a function to check if a given a number is an Armstrong number
A number is an Armstrong number if sum of digits raised to the power of number of digits in the number is the number itself
Example: 1634. Total digits are 4. 1^4+6^4+3^4+4^4 = 1634
*/

#include <stdio.h>
#include<math.h>

//prototype of the functions

int getTotalDigits(int);
int isArmstrong(int);

int getTotalDigits(int n){
    int count = 0; //To count the number of digits in a number, divide the number by 100 until the number reaches zero.
    while(n>0){
        n = n/10;
        count++;
    }
    return count;
}

int isArmstrong(int n){
    int sum = 0;
    int count = getTotalDigits(n);
    int temp = n;
    while(n>0){
        sum = sum + pow(n %10, count);
        n = n/10;
    }
    return temp == sum;
    }

int main(){
    int i;
    for(i=0;i<50000;i++){
        if(isArmstrong(i))
            printf("%d is an Armstrong number \n", i);
    }
    return 0;
    }
