#include<bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> Array = {1,2,3,7,0};
    int n = Array.size();
    int count = 0;

    for(int i=1; i<n; i++)
    {
        if(Array[i-1] > Array[i])
        {
            count++;
        }
    }

    if(Array[n-1]>Array[0])
    {
        count++;
    }

    if(count<=1)
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    return 0;
}