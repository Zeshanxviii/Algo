#include<bits/stdc++.h>
using namespace std;
void secondSL(vector<int> &arr)
{
    sort(arr.begin(),arr.end());  
}

int main ()
{
    vector<int> array = {0,1,3,2,1,4};
    secondSL(array);
    int lastDigit = array.size();
    if(array[1]&& array[lastDigit-2])
    {
       cout<<array[1]<<" "<<array[lastDigit-2]; 
    }
    else
    {
        cout<<-1;
    }

    return 0;
}