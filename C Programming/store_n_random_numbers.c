#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int n;
    printf("Enter the array size:");
    scanf("%d", &n);

    int x[n], i;

    srand(time(NULL)); //generating random seed for the random function
    for(i=0;i<n;i++){
        x[i] = rand() % 100; //modulo hundred generated two digit random numbers
    }
    //printf("Content of the array: \n");
    int sum = 0;
    double average;
    for(i=0;i<n;i++){
        sum += x[i];
    }
    average = (double)sum/n;
    printf("Average of %d random numbers is %lf\n", n, average);
    return 0;
    }
