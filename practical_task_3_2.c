/*
Написать три программы согласно индивидуальному варианту. В первой 
программе смоделировать арифметический цикл с помощью оператора цикла
for. Во второй программе использовать циклы while или do … while. В третьей
программе вычислить бесконечную сумму с заданной точностью, используя
рекуррентные зависимости
Вариант 5
*/

#include <stdio.h>
#include <math.h>

int main() {
    float A, B;
    int m = 1;
    printf("Enter numbers A and B (A && B > 1):\n");
    if (scanf("%f%f", &A, &B) == 2 && getchar() == '\n') {
        while (pow(B, m) <= m * A) m++;
        printf("The smallest natural number m that satisfies the condition B^m > m * A: %d\n", m);
    } else printf("Error! Incorrect values entered!");
    return 0;
}