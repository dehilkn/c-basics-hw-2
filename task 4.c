#include <stdio.h>


// 4 завдання
// Користувач задає m та n значення, а також символ яким буде заповнена матриця
// виведіть матрицю MxN заповнену обраним символом

int main(void) {

    //NxM matrix
    int N = 0;
    printf("Please enter N: ");
    scanf("%d", &N);
    int M = 0;
    printf("Please enter M: ");
    scanf("%d", &M);
    int symbol = 0;
    printf("Please enter symbol: ");
    scanf("%d", &symbol);

    for (int i = 0; i < N; i++) {
        for (int b = 0; b < M; b++) {
            printf("%d ", symbol);
        }
        printf("\n");
    }

    return 0;
}