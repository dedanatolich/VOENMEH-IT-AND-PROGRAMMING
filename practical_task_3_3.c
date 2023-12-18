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
#include <conio.h>

int factorial(int n) {   
    int sum = n;
    if (n > 1) sum = sum * factorial(n - 1);
    return sum;
}

double calculateSum(double x) {
    double previous, current;
    double sum = 0.0;
    int n = 1;
    current = (pow(-1, n)*pow(x, n-1))/(factorial(n+1));
    sum += current;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
    n++;
    do {
        previous = current;
        current = (pow(-1, n)*pow(x, n-1))/(factorial(n+1));
        sum += current;
        n++;
    } while (abs(current - previous) > pow(10, -6));
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