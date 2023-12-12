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

int factorial(int n) {
    int flag;
    if (n == 0 || n == 1) flag = 1;
    else flag = n * factorial(n-1);
    return flag;
}

double calculateSum(double x) {
    double sum = 0;
    int n = 1;
    double term = 1;
    while (term >= pow(10, -6)) {
        sum += (pow(-1, n)*pow(x, n-1))/(factorial(n+1));
        n++;
    }
    return sum;
}

int main() {
    double x;
    if (scanf("%lf", &x) == 1 && x >= -1 && x <= 1 && getchar() == '\n') {
        double res = calculateSum(x);
        printf("Amount with an accuracy of 10^-6: %lf\n", res);
    } else printf("Error! Incorrect value entered!");
    return 0;
}