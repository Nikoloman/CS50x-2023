#include <stdio.h>

int main(void){
    int num1;
    int num2;

    printf("Write the first number: ");
    scanf("%d", &num1);
    printf("Write the second number: ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d / %d = %f\n", num1, num2, (float) num1 / (float) num2);
}