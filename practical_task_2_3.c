/*
Написать три программы согласно индивидуальному варианту. В первой 
программе вычислить значение функции по указанной формуле, использовать 
функции математической библиотеки. Во второй программе вычислить 
значение функции, используя условную операцию «?:». В третьей программе 
использовать условный оператор if.
Вариант 5
*/

#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;
    printf("Enter the coordinates of the first point (x1, y1)\n");
    printf("Enter the coordinates of the second point (x2, y2)\n");
    printf("Enter the coordinates of the third point (x3, y3)\n");
    if (scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3) == 6 && getchar() == '\n') {
        float side1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        float side2 = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
        float side3 = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);
        if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2) {
            printf("Yes, these points can be the vertices of a triangle");
        } else printf("No, these points can't be the vertices of a triangle");
    } else printf("Error! Incorrect values entered!");
    return 0;
}