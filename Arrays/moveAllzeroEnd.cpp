#include<bits/stdc++.h>
using namespace std;


void PrintArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n = 7;
    int arr[n] = {1,2,0,2,0,0,2};
    int temp;

    for(int i=0; i<n; i++)
    {   
        if(arr[i]==0)
        {
            temp = arr[i];
            //shifting
            for(int j=i; i<n-1; i++)
            {
                arr[j] = arr[j+1];
            }
            arr[n-1]=temp;
        }
    }

    //Print function calling 
    PrintArray(arr,n);

    return 0;
}