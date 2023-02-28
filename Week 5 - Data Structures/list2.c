#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure of our nodes 
typedef struct node{
    char phrase[20];
    struct node *next;
}
node;

#define LIST_SIZE 5

// Prototype of the functions
void unload(node *list);
void visualize(node *list);

int main(void){
    node *list = NULL;

    // Add item to the list
    for (int i = 0; i < LIST_SIZE; i++){
        char phrase[20];
        printf("Enter a new phrase: ");
        scanf("%s", phrase);

        node *n = malloc(sizeof(node));

        if (n == NULL){
            printf("Could not allocate memory");
            return 1;
        }

        strcpy(n -> phrase, phrase);
        n -> next = list;
        list = n;

        visualize(list);
    }
    unload(list);
}

// Free all allocated nodes
void unload(node *list){
    while (list != NULL){
        node *ptr = list -> next;
        free(list);
        list = ptr;
    }
    
    
}

void visualize(node *list){
    printf("\n+-- List Visualizer --+\n\n");
    while (list != NULL){
        printf("Location %p\n", list);
        printf("Phrase: \"%s\"\n", list -> phrase);
        printf("Next: %p\n\n", list -> next);
        list = list -> next;
    }
    printf("+---------------------+\n");
}