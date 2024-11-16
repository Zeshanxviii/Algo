#include<bits/stdc++.h>
using namespace std;

//Kandan's algorithms
int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int cntsum = 0 , maxsum = INT_MIN;

    for(int val:nums)
    {
        cntsum += val;
        maxsum = max(cntsum,maxsum);
        if(cntsum < 0)
        {
            cntsum = 0;
        }
    }
    
    cout<<maxsum<<endl;
    return 0;
}