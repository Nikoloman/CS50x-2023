#include <stdio.h>

int main(void){
    int n = 50;
    printf("Address of n: %p\n", &n);

    int *p = &n;
    printf("Value of n: %i\n", *p);

    char *string = "Hi!";
    printf("Address of string: %p\n", string); // Prints the start of the string
    printf("Address of the char: %p\n", &string[0]); // Address of 'H'
    printf("Address of the char: %p\n", &string[1]); // Address of 'i'
    printf("Address of the char: %p\n", &string[2]); // Address of '!'
    printf("Address of the char: %p\n", &string[3]); // Address of '\0'

    // Prints what is in the pointer, and also doing some arithmetics
    printf("%c\n", *string);
    printf("%c\n", *(string + 1));
    printf("%c\n", *(string + 2));

    // Moves the starting byte of the array
    printf("%s\n", string);
    printf("%s\n", string + 1);
    printf("%s\n", string + 2);
}