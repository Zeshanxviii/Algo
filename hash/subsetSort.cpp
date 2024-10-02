#include <bits/stdc++.h>
using namespace std;
bool issubSet (vector<int> &arr1 , vector<int> &arr2)
{
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    int i = 0 , j = 0 ;
    while(i<arr1.size()&&j<arr2.size())
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]==arr2[j])
        {
            i++;    
            j++;
        }
        else{
            return false;
        }
    }
        return true;
}
int main(int argc, char const *argv[])
{
    vector<int> arr1 = {1,2,4,3,5};
    vector<int> arr2 = {2};
    if(issubSet(arr1,arr2))
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
