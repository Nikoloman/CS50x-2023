#include <stdio.h>

int main(void){
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    int num;

    printf("Write the number you want to search: ");
    scanf("%d", &num);

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == num)
        {
            printf("Found in index %d!\n", i);
            return 0;
        }
    }
    
    printf("The number wasn't found");
    return 1;
}