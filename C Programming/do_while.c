#include <stdio.h>

int main(){
    int age;
    char response;

    do{
        printf("Enter age:");
        scanf("%d", &age);

        if(age>=13 && age<=19)
            {
                printf("Teen age\n");
            }
        else
            {
                printf("You are not a teenager\n");
            }

        printf("Do you want to continue (y/n):");
        scanf(" %c", &response); // To over come enter value for Ch a space needs to be given while accepting character values. Buffer flush issue
    }while(response == 'y' || response == 'Y');

    return 0;
}
