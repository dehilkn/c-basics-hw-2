#include <stdio.h>


// 5 завдання
// користувач має задати в консоль числа min та max,
// Використовуючи цикли потрібно вивести всі числа з інтервалом в +1 від min до max.

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

int main(void) {

    //NxM matrix
    int numb1 = 0;
    printf("Please enter 1st: ");
    scanf("%d", &numb1);
    int numb2 = 0;
    printf("Please enter 2nd: ");
    scanf("%d", &numb2);

    int max_value = get_max_value(numb1, numb2);
    int min_value = get_min_value(numb1, numb2);
    printf("Max value: %d, min value %d\n", max_value, min_value);



    for (int i= min_value; i<=max_value; i++) {
        printf("%d ",i);
    }

    return 0;
}