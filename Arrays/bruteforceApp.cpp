#include<bits/stdc++.h>
using namespace std;

int Sort(vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    return arr.size() - 1;
}

int main()
{
    vector<int> temp = { 1, 2,3,9 ,2};
    int index = Sort(temp);
    cout<<"Largest temp :"<<temp[index]<<endl;    
    return 0;
}