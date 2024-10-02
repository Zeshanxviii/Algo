#include <bits/stdc++.h>
using namespace std;

bool isSubset (vector<int> &arr, vector<int> &arr1)
{
    unordered_set<int> hashset(arr.begin(),arr.end());
    for(auto nums : arr1)
    {
        if(hashset.find(nums)== hashset.end())
        return false;
    }

    return true;
}
int main()
{
    vector<int> arr1 = {1, 11, 32, 50};
    vector<int> arr2 = {11,1};
    int m = arr1.size();
    int n = arr2.size();
    if (isSubset(arr1, arr2))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}