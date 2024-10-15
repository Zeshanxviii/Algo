#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    int pivot = arr[s];
    int count = 0;
    
    // Count elements less than the pivot
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] < pivot) {
            count++;
        }
    }

    // Position the pivot in the correct place
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // Partition the array
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] < pivot ) {
            i++;
        }
        while (arr[j] >= pivot ) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {
    // Base case
    if (s >= e) {
        return;
    }

    int p = partition(arr, s, e);

    // Sort the left and right partitions
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main() {
    int arr[5] = {38, 2, 3, 9, 20};
    
    quickSort(arr, 0, 4);
    
    // Print array
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
