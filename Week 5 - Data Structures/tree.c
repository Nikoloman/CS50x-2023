// Structure of a tree
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int number;
    struct node *right;
    struct node *left;
}
node;

int main(){

}

char* search (node *tree, int number){
    if (tree == NULL){
        return "false";
    }
    else if (number < tree -> number){
        return search(tree -> left, number);
    }
    else if(number > tree -> number){
        return search(tree -> right, number);
    }
    else{
        return "true";
    }
}