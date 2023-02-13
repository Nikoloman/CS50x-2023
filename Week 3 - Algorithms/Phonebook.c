#include <stdio.h>
#include <string.h>

typedef struct
{
    const char *name;
    const char *number;
}
Person;

int main(void){

    Person people[2];
    people[0].name = "Oscar";
    people[0].number = "11-22-33-44-55";

    people[1].name = "Andy";
    people[1].number  = "66-77-88-99-00";

    char name[10];

    printf("Write the name to search their phone number: ");
    scanf("%s", name);

    for (int i = 0; i < 6; i++){
        if (strcmp(people[i].name, name) == 0){
            printf("Name: %s\n", people[i].name);
            printf("Phone number: %s", people[i].number);
            return 0;
        }
    }

    printf("Phone number not found :(");
    return 1;
}