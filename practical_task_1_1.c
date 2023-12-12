/*
Набрать текст программы, представленный листингом. 
Проанализировать значения переменных после каждой операции 
присваивания. Проверить порядок выполнения операций в одном из 
выражений, содержащих несколько операций присваивания, разделив этот 
оператор-выражение на несколько операторов, выполняемых 
последовательно. В функциях ввода и вывода изменить спецификаторы типов, 
проанализировать полученные результаты.
*/

#include <stdio.h>

int main () {
    int a, b = 5, c;
    float x, y = -.5, z;
    printf("a = ");
    scanf("%d", &a);
    c = a;
    x = c;
    printf("a = %d, c = %d, x = %f\n", a, c, x);
    a += b;
    printf("a = %d\n", a);
    x += b + a;
    printf("x = %f\n", x);
    b += a--;
    printf("b = %d\n", b);
    x -= ++c;
    printf("x = %f\n", x);
    c = a/b;
    printf("c = %d\n", c);
    c = a%b;
    printf("c = %d\n",c);
    x = 5.3;
    y += ((--x - 1) / x++);
    printf("x = %.2f\ty = %.2f\n\nx = %.0f\ty = %.0f\n", x - 1, y, x, y - 1);
    z = a / 2;
    printf("z = %f\n", z);
    z = (float) a/2;
    printf("z = %f\n", z);
    y = x/2;
    printf("y = %f\n", y);
    y = (int)x/2;
    printf("y = %f\n", y);
    z = a%2 - (x+b)/c + (x-y)/(a-1) + 1/4*a - y++ + ++b/3.;
    /*
    float temp1 = a % 2;
    float temp2 = (x + b) / c;
    float temp3 = (x - y) / (a - 1);
    float temp4 = 1/4 * a;
    float temp5 = y++;
    float temp6 = ++b;
    z = temp1 - temp2 + temp3 + temp4 - temp5 + temp6 / 3.;
    */
    printf("a = %d b = %d c = %d x = %f y = %f z = %f\n", a, b, c, x, y, z);
    return 0;
}