//Accept a string from the user and count the number of alphabets in the string and number of spaces

#include<stdio.h>

int main(){
    char str[80];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int i, countAlpha = 0, countSpace = 0;

    for(i=0;str[i] != '\0';i++){
        if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
            countAlpha++;
        else if(str[i]== ' ')
            countSpace++;
    }
    printf("Total number of Alphabets are %d\n", countAlpha);
    printf("Total number of space characters found are %d\n", countSpace);

    return 0;
}
