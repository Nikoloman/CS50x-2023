#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char phrase[20];
    struct node *next; 
}
node;

node *table[26];

int hash(char phrase[20]);

int main(void){
    for (int i = 0; i < 3; i++){
        printf("Enter a new phrase: ");
        char phrase[20];
        scanf("%s", phrase);
        
        int index = hash(phrase);
        printf("%s hashes to %d\n", phrase, index);
    }
}

int hash(char phrase[20]){
    return toupper(phrase[0]) - 'A';
}