#include <iostream>
#include <cassert>
#include <algorithm>
using std::cout;
using std::endl;
using std::swap;
using std::boolalpha;

void getSelectionSort(int* arr, int size) {
  for (int i = 0; i < size - 1; i++) {
    int min_index = i;

    for (int j = i + 1; j < size; j++) {
      cout << "Comparing index: " << i << " " << j << endl;
      if (arr[min_index] > arr[j]) {
        min_index = j;
      }
    }

    if (min_index != i) {
      swap(arr[i], arr[min_index]);
    }
  }
}

int main() {
  int arr[] = { 8, 3, 2, 5, 1 };
  int size = sizeof(arr) / sizeof(arr[0]);

  assert(size > 0);

  getSelectionSort(arr, size);

  cout << "Sorted Array: ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}