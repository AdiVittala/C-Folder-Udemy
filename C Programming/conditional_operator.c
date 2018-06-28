/* Conditional operator in C is ternary in nature. i.e it requires three variables
* Conditional operator is represented as ?: in C
* Expression for conditional operator is: condition? expression for true value for the condition: expression for false value for the condition

Example: m(need to find value of this variable based on a condition) = a>b? a+b:a-b
Example for nested conditional operator: m  = (a>b && a>c)?a:(b>c?b:c);
*/

#include <stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    age>=13 && age<=19?printf("Yes teenage"):printf("No not teenage");

    return 0;

    }
