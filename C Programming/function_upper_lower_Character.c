#include<stdio.h>

int islowerCase(char);
int isUpperCase(char);
char toUpperCase(char);
char toLowerCase(char);

int isLowerCase(char ch){
    if(ch >='a' && ch <= 'z')
        return 1;
    else
        return 0;
}

int isUpperCase(char ch){
    if(ch >='A' && ch <= 'Z')
        return 1;
    else
        return 0;
}

char toLowerCase(char ch){
    if(isUpperCase(ch))
        return(ch+32);
    else
        return ch;
    }

char toUpperCase(char ch){
    if(isLowerCase(ch))
        return(ch-32);
    else
        return ch;
}

int main(){

    char k;
    k = 'A';
    k = toLowerCase(k);
    printf("Equivalent Lower case alphabet is %c\n", k);

    k = 'q';
    k = toUpperCase(k);
    printf("Equivalent Upper Case alphabet is %c\n", k);

    return 0;
}
