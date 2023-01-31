#include <stdio.h> // Standard input output

int main (void){
    char strFirstName[50];
    char strLastName[50];

    printf("Hey there! What's your first name?: ");
    scanf("%s", strFirstName);
    printf("Cool! And what is your last name?: ");
    scanf("%s", strLastName);

    printf("Nice to meet you %s %s :D", strFirstName, strLastName);
}