#include<iostream>
using namespace std;

void bubbleSort(int arr[], int e)
{
    if(e==1)
    {
        return;
    }
        int count = 0;
    for(int i=0 ; i<=e ;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i], arr[i+1]);
            count++;
        }
    }
    if(count==0)
    {
        return;
    }
    
    bubbleSort(arr,e);
}

int main()
{
    int arr[5] = {38, 2 , 3 , 9 , 1};
    bubbleSort(arr,4);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}