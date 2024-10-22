#include<iostream>
using namespace std;

int LargestELement(int arr[], int n)
{
    int temp= arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>temp)
        {
            temp = arr[i];
        }
    }
    return temp;
}

int main () 
{
    int n = 5;
    int arr[n] = {2,1,4,2,0};
    cout<<"Largest Element is "<<LargestELement(arr,n);
    return 0;
}