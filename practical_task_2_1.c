/*
Написать три программы согласно индивидуальному варианту. В первой 
программе вычислить значение функции по указанной формуле, использовать 
функции математической библиотеки. Во второй программе вычислить 
значение функции, используя условную операцию «?:». В третьей программе 
использовать условный оператор if.
Вариант 5
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float p;
    float Q;
    printf("Enter the value of the variable p = ");
    if (scanf("%f", &p) == 1 && getchar() == '\n') {
        Q = (pow(p, 2) - log(abs(pow(p, 1/4) + exp(-p))))/(1 + sin(p)*cos(p));
        printf("Function value Q = %f", Q);
    } else printf("Error! Incorrect values entered!");
    return 0;
}