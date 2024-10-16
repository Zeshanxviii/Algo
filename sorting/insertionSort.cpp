#include<iostream>
using namespace std;

void insertionSort(int arr[], int begin, int end) {
    // Base case: if we've reached the end of the array
    if (begin >= end) {
        return;
    }

    // Take the current element
    int current = arr[begin];
    int j = begin - 1;

    // Shift larger elements to the right
    while (j >= 0 && arr[j] > current) {
        arr[j + 1] = arr[j];
        j--;
    }

    // Insert the current element into its correct position
    arr[j + 1] = current;

    // Recursive call to sort the next element
    insertionSort(arr, begin + 1, end);
}

int main() {
    int arr[5] = {12, 13, 1, 2, 5};

    insertionSort(arr, 1, 5);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
