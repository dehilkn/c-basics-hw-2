#include <stdio.h>


// 6 завдання
// Напишіть програму яка в консоль буде виводити 7 чисел після заданого користувачем числа. Використайте #define
// Example Input : 5
// Output : 5 6 7 8 9 10 11 12
#define F1 7

int main() {

    int a = 0;
    printf("Please insect value: ");
    scanf("%d", &a);

    for (int i=0;i<=F1;i++) {
        printf("%d ", a+i);
    }



    return 0;
}