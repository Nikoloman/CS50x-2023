#include <stdio.h>
#include <string.h>

int main(void){
    const char *countries[] = {"Mexico", "Argentina", "Chile", "Peru", "Colombia", "Venezuela"};
    char country[10];

    printf("Input the country you want to search: ");
    scanf("%s", country);

    for (int i = 0; i < 6; i++){
        if (strcmp(countries[i], country) == 0){
            printf("Country found in our database :D\n");
            return 0;
        }
    }
    printf("The country wasn't found in our database D:\n");
    return 1;
}