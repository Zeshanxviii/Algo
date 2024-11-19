#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    // Separate positives and negatives
    vector<int> positives;
    vector<int> negatives;

    for (int num : nums) {
        if (num > 0) {
            positives.push_back(num);
        } else {
            negatives.push_back(num);
        }
    }

    // Rearrange by alternating
    vector<int> result;
    int n = positives.size();
    for (int i = 0; i < n; ++i) {
        result.push_back(positives[i]);
        result.push_back(negatives[i]);
    }

    return result;
}

int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> result = rearrangeArray(nums);

    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
