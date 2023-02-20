#include <stdio.h>
#include <string.h>

int main(void){
    char str1[10];
    char str2[10];

    printf("Write the first word: ");
    scanf("%s", str1);

    printf("Write the second word: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0){
        printf("Both strings are the same!");
    }
    else{
        printf("The strings aren't the same!");
    }
}