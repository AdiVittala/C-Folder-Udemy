#include<stdio.h>
#include<stdlib.h>
// three keywords: malloc, calloc, realloc. Memory will be allocated contiguously. But if the compiler cannot assign contiguous memory locations, then NULL is returned to the calling statement
// In such a case, we should exit from the program since dynamic memory allocation has failed.

int main(){
     int x[20]; // This is compile time allocation. We cannot change the memory size during execution time. Sometimes it is hard to figure out how much memory is required
     // during runtime of program and hence cannot assign memory during compilation time. Dynamic memory allocation happens in the heap area.

     int *p; // For dynamic memory allocation, we need a pointer to store the base address
     int n;
     printf("Enter how many integers:");
     scanf("%d", &n);
     p = (int *)malloc(n * sizeof(int)); //malloc when called requires the  number of bytes to allocate in the heap area. Malloc return the base address as a void pointer because malloc is not aware of the type of
     // data that is stored in the heap area.

     if(p == NULL){
        printf("Unable to allocate memory\n Exiting the program\n");
        exit(1); //1 means exit happened because of an error.
     }

     // use the allocated space pointed by p for keeping values

     int i;
     for(i=0;i<n;i++){
        printf("Next number: ");
        scanf("%d", p+i);
     }

     printf("Content of the array: ");
     for(i=0;i<n;i++){
        printf("%4d", *(p+i));
     }
    free(p); //de-allocate the memory when the memory use is done
     return 0;
}
