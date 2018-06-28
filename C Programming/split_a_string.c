#include<stdio.h>
#include<stdlib.h>
#define MAX 30

/* String is an array of characters that is terminated by a null
character. Write a function to split a string like "book*abacus"
and splits all the characters prior to that * and last contains all the
characters after that *.
We can assume that three is only * in the string. Once the strings are split, they will non - terminated strings
*/

void split(char str[], char first[], char second[]){
    int i;
    int j;
    while(str[i] != '*'){
        first[i] = str[i];
        i++;j++;
    }
    first[j] = '\0';
    i += 1;
    j = 0;
    while(str[i] != '\0'){
        second[j] = str[i];
        i++;j++;
    }
    second[j] = '\0';
}


int main(){
    char str[] = "book*abacus";
    char first[MAX];
    char second[MAX];
    split(str, first, second);
    printf("First Part: %s\n", first);
    printf("Second Part: %s\n", second);

    return 0;
}
