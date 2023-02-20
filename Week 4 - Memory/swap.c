#include <stdio.h>

void swap(int *a, int *b);

int main(void){
    int x;
    int y;

    printf("Write the first number (x): ");
    scanf("%d", &x);
    printf("Write the second number (y): ");
    scanf("%d", &y);

    swap(&x, &y);

    printf("x is now: %d\n", x);
    printf("y is now: %d\n", y);
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}