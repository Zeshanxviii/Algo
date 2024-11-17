#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> arr = {7,1,5,3,6,4};

    int maxProfit = 0, bestBuy = arr[0];

    for(int i=1; i<arr.size()-1; i++)
    {

        bestBuy = min(bestBuy, arr[i]);       
        maxProfit = max(maxProfit, arr[i]-bestBuy);
        
        
    }

    cout<<maxProfit<<endl;


    return 0;
}