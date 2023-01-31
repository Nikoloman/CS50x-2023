#include <stdio.h>

int main (void){
    int num1;
    int num2;

    printf("Write the first number: ");
    scanf("%d", &num1);
    printf("Write the second number: ");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("The number %d is greater than %d", num1, num2);
    }
    else{
        if (num1 < num2){
            printf("The number %d is less than %d", num1, num2);
        }
        else{
            printf("The number %d equals to %d", num1, num2);
        }
    }
}