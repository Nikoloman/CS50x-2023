/*
Create a program that promts for the size "n".
Dinamically create an array of that size,
where each element is 2 times the previous one.
Start the array at 1.
Print the array integer by integer
*/

#include <stdio.h>

int main(void){
    int n;

    // Prompting the length of the array
    do{
        printf("Enter the length of the array: ");
        scanf("%d", &n);
    } while(n < 1);

    // Initializing the array with the given name
    int array[n];
    array[0] = 2;

    // Doing the operations ending in the second last element
    for (int i = 0; i < n - 1; i++){
        array[i + 1] = array[i] * 2;
    }

    // Printing the whole array
    for (int i = 0; i < n; i++){
        printf("[%i] ", array[i]);
    }
}