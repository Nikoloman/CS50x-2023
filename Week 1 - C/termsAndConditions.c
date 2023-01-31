#include <stdio.h>

int main (void){

    char c;

    printf("Do you accept terms and conditions? [Y/N]: ");
    scanf("%c", &c);

    if (c == 'y' || c == 'Y'){
        printf("Ok, we good then, you can enter");
    }
    else if (c == 'n' || c == 'N'){
        printf("You shall not pass");
    }
    else{
        printf("Invalid option");
    }
}