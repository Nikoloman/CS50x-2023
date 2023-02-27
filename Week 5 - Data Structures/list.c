#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *list = malloc(3 * sizeof(int));

    if (list == NULL){ // If the computer is out of memory
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // More code and stuff of a program  or smth, doesn't matter

    int *tmp = realloc(list, 4 * sizeof(int));

    if (tmp == NULL){
        free(list);
        return 1;
    }
    list = tmp;
    list[3] = 4;

    for (int i = 0; i < 4; i++){
        printf("%i\n", list[i]);
    }

    free(list);
    return 0;
}