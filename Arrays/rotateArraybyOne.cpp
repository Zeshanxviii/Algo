#include<bits/stdc++.h>
using namespace std;

// brute force approch to rotate array by 1
/*
int main()
{
    int arr[5] = {1,2,3,4,5};
    int temp = arr[0];
    for(int i=0; i<5; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[4] = temp;

    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
*/

//optimise approch

int main ()
{
    vector<int> arr = {1,1,2,3,3,4};
    int n = arr.size();
    int count = 0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==arr[i+1])
        {
            continue;
        }
        else
        {
            arr[count] = arr[i];
            count++;
        }
    }


    for(int j=0; j<arr.size(); j++)
    {
        cout<<arr[j];
    }

    return 0;
}