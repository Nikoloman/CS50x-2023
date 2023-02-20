#include <stdio.h>
#include <stdlib.h>

int main(void){
    int scores[1024];
    // Creates random numbers because it wasn't properly initialized
    for (int i = 0; i < 1024; i++){
        printf("%d\n", scores[i]); // Garbage values
    }
}