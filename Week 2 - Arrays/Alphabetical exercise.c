/*
Check if a lowercase string's characters are in alphabetical order.
If yes, print "Yes".
If not, print "No".
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char string[20];

    printf("Write the sequence of letters (limit 20): ");
    scanf("%s", string);
    
    int stringLength = strlen(string);
    char c = string[0];
    bool ordered;

    for (int i = 0; i < stringLength; i ++){
        if (c <= string[i]){
            c = string[i];
            ordered = true;
        }
        else{
            ordered = false;
            break;
        }
    }

    if (ordered){
        printf("Yes");
    }
    else{
        printf("No");
    }
}