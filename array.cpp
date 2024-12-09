#include "array.h"

// Функция для нахождения максимума из двух чисел
int max(int left, int right) {
    return (left > right) ? left : right;
}

// Функция для нахождения минимума из двух чисел
int min(int left, int right) {
    return (left < right) ? left : right;
}

// Функция для нахождения индекса минимального элемента массива
int min_index(int* massive, int size) {
    if (size <= 0) return -1; // Если массив пустой, возвращаем -1
    int minIdx = 0;
    for (int i = 1; i < size; ++i) {
        if (massive[i] < massive[minIdx]) {
            minIdx = i;
        }
    }
    return minIdx;
}

// Функция для нахождения индекса максимального элемента массива
int max_index(int* massive, int size) {
    if (size <= 0) return -1; // Если массив пустой, возвращаем -1
    int maxIdx = 0;
    for (int i = 1; i < size; ++i) {
        if (massive[i] > massive[maxIdx]) {
            maxIdx = i;
        }
    }
    return maxIdx;
}