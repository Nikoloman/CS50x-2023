#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* file1;

    // Writing in the file
    file1 = fopen("file1.txt", "w");
    fprintf(file1, "Hello World! :D\n");
    fprintf(file1, "How are you?\n");
    fprintf(file1, "Hope you are doing good\n");

    // Closing the file to open it again with other configuration
    fclose(file1);

    // Reading strings from file
    char string[50];
    file1 = fopen("file1.txt", "r");
    fscanf(file1, "%s", string); // Scans only the first word
    printf("%s%s", string);
    fclose(file1);
}