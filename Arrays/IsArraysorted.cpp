#include<bits/stdc++.h>
using namespace std;

bool IsIncreasing(vector<int>a,int n)
{
    bool isAsscending = false;
    
    for(int i = 0;i < n;i++)
    {
        if(a[i] <= a[i+1])
        {
            isAsscending = true;
            
        }
        else
        {
            return false;
        }
        
    }    
    return isAsscending;
}

bool IsDeccending(vector<int> a, int n)
{
    bool isDeccending = false;
    for(int i = 0;i < n;i++)
    {
        if(a[i] >= a[i+1])
        {
            isDeccending = true;
        }
        else{
            return false;
        }
    }
    return isDeccending;
}
void IsArraySorted(vector<int> a,int n)
{
    cout<<"Checking is Array SOrted"<<endl;
    if(IsDeccending(a,n))
    {
        cout<<"Array is Sorted"<<endl;
    }
    else if(IsIncreasing(a,n))
    {
        cout<<"Array is Sorted"<<endl;
    }
    else
    {
        cout<<"Array is not Sorted"<<endl;
    }
}

int main()
{
    vector<int> Array = {1,2,3,4,5,6};
    int size = Array.size();
    IsArraySorted(Array,size);
    return 0;
}