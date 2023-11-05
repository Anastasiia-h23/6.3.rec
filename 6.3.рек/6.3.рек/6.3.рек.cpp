#include <iostream>
#include <Windows.h>

int calculateSumRecursive(int arr[], int size, int index = 0) {
    if (index == size) {
        return 0;  
    }

    return arr[index] + calculateSumRecursive(arr, size, index + 1);  
}

template <typename T, size_t N>
T calculateSumRecursive(T(&arr)[N], size_t index = 0) {
    if (index == N) {
        return 0;  
    }

    return arr[index] + calculateSumRecursive(arr, index + 1);  
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int array[] = { 6, 8, 12, 0, 2 };
    size_t size = sizeof(array) / sizeof(array[0]);

    int sum = calculateSumRecursive(array, size);

    std::cout << "Сума елементів масиву: " << sum << std::endl;

    return 0;
}
