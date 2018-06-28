//Using string utility functions from string.h library

#include<stdio.h>
#include<string.h>

int main(){

    /* String Copy */
    //char first[80] = "Chocolate Candy";
    //char second[80];

    //strcpy(second, first);
    //printf("Copied string value is %s\n", second);

    /* String Concatenation */

    //char first[80] = "Chocolate";
    //char second[80] = "Candy";

    //strcat(first, " "); // Adding a space before concatenating two strings
    //strcat(first,second);
    //printf("Complete string after concatenation is: %s\n", first);

    /* String Comparison */

    char first[80] = "Cat";
    char second[80] = "Zebra";

    int i;
    i = strcmp(first, second); //strcmp does dictionary comparison meaning if both are equal it returns 0, if first string occurs first in the dictionary then it returns
    //a negative value and if second comes first in the dictionary it returns a positive value
    if(i==0)
        printf("Both strings are equal\n");
    else if(i<0)
        printf("%s comes first\n", first);
    else
        printf("%s comes first\n", second);

return 0;
}
