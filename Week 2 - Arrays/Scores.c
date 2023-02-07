#include <stdio.h>

const int N = 3; // Global contant intead of hardcode

float average (int array[]);

int main (void){
    int scores[N];

    for(int i = 0; i < N; i++){
        printf("Score #%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    printf("The average is: %f", average(scores));
}

float average (int array[]){
    int sum = 0;
    for (int i = 0; i < N; i++){
        sum += array[i];
    }
    return sum / (float) N;
}