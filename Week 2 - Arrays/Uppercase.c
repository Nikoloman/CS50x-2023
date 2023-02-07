#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char string[20] = "hello world";
    printf("Before: %s", string);
    printf("After: ");

    for (int i = 0, n = 20; i < n; i++){
            printf("%c", toupper(string[i]));
    }
}