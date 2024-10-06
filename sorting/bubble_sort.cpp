#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter input: ";
    cin >> n;

    vector<int> arr(n); // Use a vector for dynamic sizing
    for (int in = 0; in < n; in++) {
        cin >> arr[in];
    }

    // Sorting in descending order using Bubble Sort
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); // Using std::swap for clarity
            }
        }
    }

    // Output the sorted array
    for (int z = 0; z < n; z++) {
        cout << arr[z] << " "; // Added space for better readability
    }
    cout << endl; // Add a newline at the end
    return 0;
}
