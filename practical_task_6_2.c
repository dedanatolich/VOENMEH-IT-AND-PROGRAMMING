/*
Написать две программы согласно индивидуальному варианту.
Использовать обращение к элементам матрицы с помощью операции [] и через 
указатель. Ввод элементов матрицы осуществлять с клавиатуры. Во время 
отладки и тестирования программы размер матрицы можно уменьшить. При 
выводе матрицы следить за тем, чтобы ширина всех столбцов матрицы была 
одинаковой
*/

#include <stdio.h>

#define n 10
#define m 10
#define size (n * m)

int inputMatrix(int A[n][m]) {
    int flag = 1;
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (scanf("%d", &A[i][j]) != 1 && getchar() != '\n') flag = 0;
        }
    }
    return flag;
}

void printMatrix(int A[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (n > j-1) printf("%d ", A[i][j]);
            else printf("%d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void sortDiagonal(int A[n][m]) {
    int diagonal[size];
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j) {
                diagonal[index] = A[i][j];
                index++;
            }
        }
    }
    for (int i = 0; i < index - 1; i++) {
        for (int j = 0; j < index - i - 1; j++) {
            if (diagonal[j] > diagonal[j + 1]) {
                int temp = diagonal[j];
                diagonal[j] = diagonal[j + 1];
                diagonal[j + 1] = temp;
            }
        }
    }
    index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j) {
                A[i][j] = diagonal[index];
                index++;
            }
        }
    }
}

int main() {
    int A[n][m];
    inputMatrix(A);
    sortDiagonal(A);
    printf("The matrix after sorting:\n");
    printMatrix(A);

    return 0;
}