#include <iostream>
#include <cassert>
#include <algorithm>
using std::cout;
using std::endl;
using std::swap;

void getBubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main() {
    int arr[] = { 1, 2, 35, 22, 88, 77, 100, 32};
    int size = sizeof(arr) / sizeof(arr[0]);

    assert(size > 0);

    getBubbleSort(arr, size);

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}