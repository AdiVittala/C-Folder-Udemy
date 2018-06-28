#include<stdio.h>

int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int x[n], i;
    for(i=0;i<n;i++){
        printf("Enter array element at index %d:", i);
        scanf("%d", &x[i]);
    }
    return 0;
    }
