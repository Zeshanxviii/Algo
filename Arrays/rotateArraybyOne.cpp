#include<bits/stdc++.h>
using namespace std;

// brute force approch to rotate array by 1
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