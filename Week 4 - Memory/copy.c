#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char str1[20];

    printf("Write the first word: ");
    scanf("%s", str1);

    char *str2 = malloc(strlen(str1) + 1);

    strcpy(str2, str1);

    if (strlen(str2) > 0){
        str2[0] = toupper(str2[0]);
    }
    
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    free(str2);
    return 0;
}