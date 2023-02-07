#include <stdio.h>
#include <string.h>

int main(void){
    char name[20];

    printf("Write your name: ");
    scanf("%s", name);
    printf("Hello %s!", name);
}