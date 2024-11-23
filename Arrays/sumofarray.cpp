#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int countSubarraysWithSumK(const vector<int>& nums, int k) {
    unordered_map<int, int> prefixSumCount; // To store frequency of prefix sums
    int currentSum = 0;
    int count = 0;

    // Initialize with 0 sum having one occurrence (for subarrays starting from index 0)
    prefixSumCount[0] = 1;

    for (int num : nums) {
        currentSum += num;

        // Check if (currentSum - k) exists in the map
        if (prefixSumCount.find(currentSum - k) != prefixSumCount.end()) {
            count += prefixSumCount[currentSum - k];
        }

        // Update the prefixSumCount with the currentSum
        prefixSumCount[currentSum]++;
    }

    return count;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 3};
    int k = 7;

    cout << "Count of subarrays with sum " << k << " is: " << countSubarraysWithSumK(nums, k) << endl;

    return 0;
}
