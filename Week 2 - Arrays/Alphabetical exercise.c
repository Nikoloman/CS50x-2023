/*
Check if a lowercase string's characters are in alphabetical order.
If yes, print "Yes".
If not, print "No".
*/

#include <stdio.h>
#include <string.h>

int main(){
    char string[20];

    printf("Write the sequence of letters (limit 20): ");
    scanf("%s", string);

    int stringLength = strlen(string);

    for (int i = 0; i < stringLength - 1; i ++){
        if (string[i] > string[i + 1]){
            printf("No");
            return 0;
        }
    }

    printf("Yes");
}