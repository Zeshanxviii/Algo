#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[n];
    cin>>n;
    cout<<"Enter your array element :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int temp;

    for(int i=0;i<n;i++)
    {
        int mini = i;
        for(int j=i;j<n-1;j++)
        {
            if(arr[j]<arr[mini])
            {
                temp=arr[mini];
                arr[mini]=arr[j];
                arr[j]=temp;
            }
        }
        if(mini!=i)
        {
            mini=i;
        }
    }

    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<endl;
    }

    return 0;
}