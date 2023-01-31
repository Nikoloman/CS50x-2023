#include <stdio.h>

int askRows(void);
int askColumns(void);
void printWall(int rows, int columns);

int main (void){

    // ---- Row of question mark bricks ----
    for (int i = 0; i < 5; i++){
        printf("|?|");
    }
    
    printf("\n\n");

    // ---- Column of normal bricks ----
    for (int i = 0; i < 3; i++){
        printf("#\n");
    }
    printf("\n");

    // ---- Wall of normal bricks ----
    // Calling the int functions
    int columns = askColumns();
    int rows = askRows();
    
    // Calling the void function
    printWall(rows, columns); 
}

int askRows(void){
    int rows;
    printf("And how many rows?: ");
    scanf("%d", &rows);
    return rows;
}

int askColumns(void){
    int columns;
    printf("How many colums do want for the wall?: ");
    scanf("%d", &columns);
    return columns;
}

// Creating a void function
void printWall(int rows, int columns){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            printf("#");
        }
        printf("\n");
    }
}