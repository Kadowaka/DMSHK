#include <iostream>
#include "array.h"

int main() {
    int arr[] = {10, 20, 5, 30, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Максимальное из 5 и 10: " << max(5, 10) << std::endl;
    std::cout << "Минимальное из 5 и 10: " << min(5, 10) << std::endl;

    int minIdx = min_index(arr, size);
    int maxIdx = max_index(arr, size);

    std::cout << "Индекс минимального элемента: " << minIdx << std::endl;
    std::cout << "Минимальный элемент: " << arr[minIdx] << std::endl;

    std::cout << "Индекс максимального элемента: " << maxIdx << std::endl;
    std::cout << "Максимальный элемент: " << arr[maxIdx] << std::endl;

    return 0;
}