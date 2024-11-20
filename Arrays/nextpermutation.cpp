#include <iostream>
#include <vector>
#include <algorithm>

// Function to implement next permutation manually
bool nextPermutation(std::vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;

    // Step 1: Find the first decreasing element from the end
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    // If no such element exists, the sequence is the last permutation
    if (i < 0) {
        std::reverse(nums.begin(), nums.end());
        return false; // No next permutation
    }

    // Step 2: Find the smallest element greater than nums[i] to the right
    int j = n - 1;
    while (nums[j] <= nums[i]) {
        j--;
    }

    // Step 3: Swap nums[i] and nums[j]
    std::swap(nums[i], nums[j]);

    // Step 4: Reverse the sequence to the right of i
    std::reverse(nums.begin() + i + 1, nums.end());
    return true; // Next permutation exists
}

int main() {
    std::vector<int> nums = {1, 2, 3};

    std::cout << "Original permutation: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    if (nextPermutation(nums)) {
        std::cout << "Next permutation: ";
        for (int num : nums) {
            std::cout << num << " ";
        }
    } else {
        std::cout << "No next permutation (sequence is the largest permutation).";
    }
    std::cout << std::endl;

    return 0;
}
