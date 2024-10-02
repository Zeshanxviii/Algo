#include <bits/stdc++.h>
using namespace std;

bool isSubset(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    bool result;
    for (int i = 0; i <= m; i++)
    {
        
        for (int j = 0; j <= n; j++)
        {
            if(arr1[i]==arr2[j])
            {
                result = true;
                break;
            }
        }

    }
        if(!result)
        {
            return false;
        }
        return true;
}
int main(int argc, char const *argv[])
{
                vector<int> arr1 = {1, 11, 32, 50};
                vector<int> arr2 = {32};
                int m = arr1.size();
                int n = arr2.size();
                if(isSubset(arr1,arr2,m,n))
                {
                    cout<<"Yes";
                }
                else{
                    cout<<"No";
                }
    return 0;
}
