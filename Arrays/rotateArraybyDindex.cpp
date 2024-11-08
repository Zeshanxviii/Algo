#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n = 7;
    int arr[n] = {1,2,9,2,3,4,5};
    //for largest K 
    int k = 3 % n;
    int temp[k];
    for(int i=0; i<k; i++)
    {
        temp[i] = arr[i];
    }
 
    //shifting 

    for(int i=k; i<n; i++)
    {
        arr[i-k] = arr[i];
    }
    
    //putting back rest of the element from temp
    int j = 0;
    for(int i=n-k; i<n; i++)
    {
        arr[i] = temp[j];
        j++;
    }
    //print array 
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}