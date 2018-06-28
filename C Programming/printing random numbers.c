#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int k, i;
    long t;
    t = time(NULL);
    srand(t); //This function changes the seed of the rand function. But seed needs to be provided each time we want to execute. Seed needs to be changed dynamically. Only way seed can be changed dynamically is my  using the time value.
    // Time changes all time and to capture time, we use the time function which captures number of seconds elapsed from the epoch. In C 1st Jan 1970 is taken as epoch.
    for(i=1;i<=10;i++){
        k = rand() % 100; //This function generates only psuedo random numbers. It generates the same random number all the time. To generate the different random numbers on each call the seed should be changed.
        // Taking modulo 100 in the above statement prints only two digit random numbers.
        printf("%d\n", k);
    }
    return 0;
    }
