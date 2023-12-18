/*
Написать программу для вычисления следующих выражений:
a=5, c=5
a=a+b-2
c=c+1, d=c-a+d
a=a*c, c=c-1
a=a/10, c=c/2, b=b-1, d=d*(c+b+a)
*/

#include <stdio.h>

int main() {
    float a = 5, b;
    int c = 5, d;
    printf("b = ");
    scanf("%f", &b);
    printf("d = ");
    scanf("%d", &d);
    a = a + b - 2;
    printf("a = %.2f, b = %.2f, c = %d, d = %d\n", a, b, c, d);
    c += 1;
    printf("a = %.2f, b = %.2f, c = %d, d = %d\n", a, b, c, d);
    d += c - a;
    printf("a = %.2f, b = %.2f, c = %d, d = %d\n", a, b, c, d);
    a *= c;
    printf("a = %.2f, b = %.2f, c = %d, d = %d\n", a, b, c, d);
    c -= 1;
    printf("a = %.2f, b = %.2f, c = %d, d = %d\n", a, b, c, d);
    a /= 10;
    printf("a = %.2f, b = %.2f, c = %d, d = %d\n", a, b, c, d);
    c /= 2;
    printf("a = %.2f, b = %.2f, c = %d, d = %d\n", a, b, c, d);
    b -= 1;
    printf("a = %.2f, b = %.2f, c = %d, d = %d\n", a, b, c, d);
    d *= (c+b+a);
    printf("a = %.2f, b = %.2f, c = %d, d = %d\n", a, b, c, d);
    return 0;
}