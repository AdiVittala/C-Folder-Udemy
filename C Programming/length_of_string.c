#include<stdio.h>
#include<string.h>
// To find length of a string we check for the null character in the array.

int main(){
    char str[80];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int i;
    //for(i=0;str[i]!='\0';i++);
    i = strlen(str); // This is function present in the string.h header to find the length of the string
    printf("Length of the string is %d", i);
    return 0;
    }
