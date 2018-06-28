#include<stdio.h>

int main(){
    char str[80];
    printf("Enter your name: ");
    //scanf("%s", str); // Here scanf will only accept only one string and anything after a space will be rejected. The reason is scanf will append a null character when it encounters a space, tab or return character
    // Hence we have to use pattern matching with in scanf to accept what we want to input. The scanf statement needs to be modified as follows
    scanf("%[A-Za-z ]", str); //scanf will accept all capitalized and small letters and also space
    //scanf("%[^\n]", str); //Will accept everything from keyboard except new line character. If we have scanf("%[^A]", str). This will accept everything from keyboard except when it encounters A.
    printf("Welcome, %s", str);
    return 0;
}
