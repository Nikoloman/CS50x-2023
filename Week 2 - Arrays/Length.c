#include <stdio.h>

int main (void){
    char string[] = "Hello world";
    int n = 0;

    while (string[n] != '\0')
    {
        n++;
    }
    printf("The string '%s' has a length of %d", string, n);
}