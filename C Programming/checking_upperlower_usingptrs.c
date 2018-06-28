#include<stdio.h>

void toggleChar(char *ptr){ //strings are represented using arrays in C. We do not need to pass number of elements in the string array because we can check for end of string
    //using the null character that is embedded in the string at the end of the string. Strings are character arrays.
    int i;
    for(i= 0; *(ptr+i)!= '\0'; i++){
        if(*(ptr+i)>='A' && *(ptr+i)<='Z')
            *(ptr+i) = *(ptr+i) +32;
        else if(*(ptr+i)>='a' && *(ptr+i)<='z')
            *(ptr+i) = *(ptr+i) - 32;
    }
}

int main(){
    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]", str); //%[^\n] tells the compiler to accept a string until it encounter a return character.

    toggleChar(str);
    printf("Toggled characters: %s\n", str);

    return 0;
}
