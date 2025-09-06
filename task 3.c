#include <stdio.h>

// виведіть матрицю
// користувач задає максимальне число матриці, вам потрібно вигадати алгоритм який виведе матрицю чисел так як це в прикладі:
// Example Input: 3
//
// Output:
//
// 3 3 3 3 3
// 3 2 2 2 3
// 3 2 1 2 3
// 3 2 2 2 3
// 3 3 3 3 3

int main(void) {

    //NxM matrix
    int N = 5;
    int M = 5;
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