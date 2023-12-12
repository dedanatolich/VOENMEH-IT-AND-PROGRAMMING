/*
Написать две программы согласно индивидуальному варианту.
Использовать обращение к элементам матрицы с помощью операции [] и через 
указатель. Ввод элементов матрицы осуществлять с клавиатуры. Во время 
отладки и тестирования программы размер матрицы можно уменьшить. При 
выводе матрицы следить за тем, чтобы ширина всех столбцов матрицы была 
одинаковой
*/

#include <stdio.h>

#define n 9
#define m 12

int inputMatrix(int Y[n][m]) {
    int flag = 1;
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (scanf("%d", &Y[i][j]) != 1 && getchar() != '\n') flag = 0;
        }
    }
    return flag;
}

void printMatrix(int Y[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (n > j-1) printf("%d ", Y[i][j]);
            else printf("%d", Y[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int Y[n][m];
    if (inputMatrix(Y) == 1) {
        int Sn = 0, So = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 != 0) {
                for (int j = 0; j < m; j++) {
                    if (Y[i][j] > 0) Sn += Y[i][j];
                }
            } else {
                for (int j = 0; j < m; j++) {
                    if (Y[i][j] < 0) So += Y[i][j];
                }
            }
        }
        float F = (float)(Sn + So) / (Sn - So);
        printf("F = %.2f\n", F);
    } else printf("Error! Incorrect values entered!");
    return 0;
}