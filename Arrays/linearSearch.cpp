#include<bits/stdc++.h>
using namespace std;

//finding that element
int LinearSearch(int arr[],int n,int t)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==t)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n = 5;
    int arr[n] = {2,1,4,6,4};

    int target = 5;

    cout<<LinearSearch(arr,n,target)<<endl;

    return 0;
}