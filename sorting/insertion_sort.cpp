#include<bits/stdc++.h>
using namespace std;

// void insertion_sort(int (&arr)/])
// {
//     // int arr[];
//     int temp;
//     for(int i=0;i<;i++)
//     {
//         for(int j=0+i;j<n;j++)
//         {
//             // if(arr[j]<arr[i])
//         }
//     }
// }

#include <iostream>
using namespace std;

int main() {
    int n, temp;
    cout << "Enter number of inputs: ";
    cin >> n;  // Read n first
    int arr[n];  // Now declare the array

    cout << "Enter inputs: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int z = 0; z < n; z++) {
        for (int q = z + 1; q < n; q++) {  // Fix index for comparison
            if (arr[z] > arr[q]) {
                temp = arr[z];
                arr[z] = arr[q];
                arr[q] = temp;  // Swap correctly
            }
        }
    }

    cout << "Sorted array: ";
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";  // Add space for readability
    }

    return 0;
}
