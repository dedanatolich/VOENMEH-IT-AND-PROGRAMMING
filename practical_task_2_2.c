/*
Написать три программы согласно индивидуальному варианту. В первой 
программе вычислить значение функции по указанной формуле, использовать 
функции математической библиотеки. Во второй программе вычислить 
значение функции, используя условную операцию «?:». В третьей программе 
использовать условный оператор if.
Вариант 5
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float x, y, f;
    printf("Enter the value of the variables x and y\n");
    if (scanf("%f %f", &x, &y) == 2 && getchar() == '\n') {
        f = (abs(x - y) > 2) ? (x + 3*y) : (x == y) ? 3 : 5*x*y;
        printf("f(x,y) = %.2f", f);
    } else printf("Error! Incorrect values entered!");
    return 0;
}