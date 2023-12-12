/*
Написать три программы согласно индивидуальному варианту. В первой 
программе смоделировать арифметический цикл с помощью оператора цикла
for. Во второй программе использовать циклы while или do … while. В третьей
программе вычислить бесконечную сумму с заданной точностью, используя
рекуррентные зависимости
Вариант 5
*/

#include <stdio.h>

int main() {
    int num;
    int sum;
    int square;
    printf("two-digit numbers that meet the condition\n");
    for (num = 10; num < 100; num++) {
        sum = (num / 10) + (num % 10);
        square = sum * sum;
        if (num == sum + square) printf("%d\n", num);
    }
    return 0;
}
