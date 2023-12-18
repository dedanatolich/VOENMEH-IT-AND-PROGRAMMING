/*
Написать две программы согласно индивидуальному варианту. Ввод 
элементов массива осуществлять с клавиатуры. Во время отладки и 
тестирования программы размер массива можно уменьшить
Вариант 5
1. Найти 2 первых элемента в массиве С (17), значения которых не 
попадают в заданный с клавиатуры диапазон [A, B]. Поменять их 
местами.
2. В массиве А (35) найти минимум, определить его местоположение (с 
учетом возможного повторения).
*/

#include <stdio.h>

int main() {
    int A, B;
    int C[17];
    printf("Enter the range values A and B: ");
    scanf("%d%d", &A, &B);
    printf("Enter the array elements:\n");
    int count = 0;
    int index = 0;
    for (int i = 0; i < 17; i++) scanf("%d", &C[i]);                                                                                                                              
    for (int i = 0; i < 17; i++) {
        if (C[i] >= A && C[i] <= B) {
            if (count == 0) {
                index = i;
                count++;
            } else if (count == 1) {
                int temp = C[i];
                C[i] = C[index];
                C[index] = temp;
                count++;
                break;
            }
        }
    }
    printf("New array: ");
    for (int i = 0; i < 17; i++) printf("%d ", C[i]);
    return 0;
}