#include<bits/stdc++.h>
using namespace std;

void dutchflagAlgo(int arr[],int n)
{
    int low = 0 , mid = 0 , high = n-1;
    
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
}

int main()
{
    int arr[5] = {2,2,0,1,1};
    dutchflagAlgo(arr,5);

    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0 ;
}