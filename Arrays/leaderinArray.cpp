#include<bits/stdc++.h>
using namespace std;

vector<int> findLeaders(const vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    if (n == 0) return leaders;

    int maxSoFar = arr[n - 1];
    leaders.push_back(maxSoFar); // The rightmost element is always a leader

    // Traverse the array from right to left
    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] >= maxSoFar) {
            maxSoFar = arr[i];
            leaders.push_back(arr[i]);
        }
    }

    // Reverse the leaders list to maintain the original order
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leaders = findLeaders(arr);

    cout << "Leaders in the array: ";
    for (int leader : leaders) {
        cout << leader << " ";
    }
    cout << endl;

    return 0;
}
