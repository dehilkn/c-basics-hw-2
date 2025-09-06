#include <stdio.h>

int get_max_value(int numb1, int numb2) {

    int result = 0;
    if (numb1 >= numb2) {
        result = numb1;
    }
    else {
        result = numb2;
    }

    return result;

}

int get_min_value(int numb1, int numb2) {

    int result = 0;
    if (numb1 <= numb2) {
        result = numb1;
    }
    else {
        result = numb2;
    }

    return result;

}

// void show_result(int res) {
//     printf("Result: %d\n", res);
// }


int main(void){


    int a = 0;
    int b = 0;
    printf("Enter a number: ");
    scanf("%d %d", &a, &b);
    printf("You entered: %d %d", a, b);

    int max_value = get_max_value(a, b);
    int min_value = get_min_value(a, b);
    printf("%d %d\n", max_value, min_value);
    printf("Fib range:\n");

    int fib1=0;
    int fib2=0;
    while (fib1 <= max_value) {
        if (fib1 >= min_value && fib1 <= max_value) {
            printf("%d ", fib1);
        }
        int antrs=fib1+fib2;
        fib1 = fib2;
        fib2 = antrs;
    }

    printf("\n");


    return 0;

//     Користувач задає 2 числа - min та max (потрібно також вирішити яке з чисел буде більше)
// потрібно виписати в термінал всі числа фібоначі цього проміжку
}