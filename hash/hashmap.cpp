#include <iostream>
#include <unordered_map>
#include <vector>

std::unordered_map<int, int> countFrequencies(const std::vector<int>& arr, int n) {
    // Create a hash map to store frequencies
    std::unordered_map<int, int> frequency;

    // Iterate through the input array
    for (int num : arr) {
        // Count only numbers in the range 1 to n
        if (num >= 1 && num <= n) {
            frequency[num]++;
        }
    }

    return frequency;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 2, 1, 4, 5, 6, 2, 3};
    int n = 5;

    std::unordered_map<int, int> result = countFrequencies(arr, n);

    // Print the frequency of numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        std::cout << "Frequency of " << i << ": " << result[i] << std::endl;
    }

    return 0;
}
