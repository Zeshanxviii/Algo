#include<bits/stdc++.h>
using namespace std;

// brute force approch
/*
int main()
{
    int arr[5] = {1,1,2,2,3};
    set<int> st;
    for(int i=0; i<5; i++)
    {
        st.insert(arr[i]);
    }

    //print set
    int index = 0;
    for(auto it:st)
    {
        arr[index] = it;
        cout<<arr[index]<<endl;
        index++;
    }

    return 0;
}
*/

//optimizes approch

int main()
{
    int arr[6] = { 1,1,2,2,3,3 };
    int i = 0;
    for(int j=0; j<6; j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1]= arr[j];
            i++;
        }
    }
    //print
    for(int z=0; z<=i; z++)
    {
        cout<<arr[z]<<endl;
    }
    return 0;
}