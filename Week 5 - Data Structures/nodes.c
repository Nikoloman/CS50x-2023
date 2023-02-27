#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[]){
    node *list = NULL; // A var called list that points to a node

    for (int i = 1; i < argc; i++){
        int number = atoi(argv[i]);

        node *n = malloc(sizeof(node)); // A node var called n that points to memory the size of a node

        if (n == NULL){ // If out of memory
            return 1;
        }

        n -> number = number; // Stores the value of number in n.number
        n -> next = NULL; // Getting rid of any garbage values
        n -> next = list; // The node of n now points to the start of the list
        list = n; // Now "list" points to n, making n the new first value of the list
    }

    node *ptr = list; // A node var that points at the address of "list" (the very beginning)
    while (ptr != NULL){ // loops until ptr points at nothing (NULL)
        printf("%d ", ptr -> number);
        ptr = ptr -> next; // Points to the next node in the list
    }

    ptr = list; // Returns the pointer to the first address of the list

    while (ptr != NULL){
        node *next = ptr -> next; // A node that points to the next node of our pointer
        free(ptr); // Frees ptr
        ptr = next; // Store the address of the next node in ptr
    }
}