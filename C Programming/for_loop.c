// Write a for loop code to print sum of first N natural numbers

#include <stdio.h>

int main(){
    int sum, n, i;
    //sum = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    //for(i = 1; i <=n; i++)
     //   sum += i;
     // The commented lines can be re-written efficiently as follows
    for(sum = 0, i =1; i<=n; sum += i, i++); //The semi-colon is to let the compiler know for statement is terminated here and there are no statements following the for loop. If the semi-colon is not present compiler will treat the printf statement as part of for loop
    printf("Sum of first %d numbers is: %d",n, sum);
    return 0;
    }
