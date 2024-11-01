#include<bits/stdc++.h>
using namespace std;

int SecondLargest(vector<int> &a, int n)
{
    int Flargest = INT_MIN;
    int Slargest = INT_MIN;

    for(int i = 0;i < n;i++)
    {
        if(a[i] > Flargest)
        {
            Slargest = Flargest;
            Flargest = a[i];
        }
        else if(a[i] > Slargest && a[i] < Flargest)
        {
            Slargest = a[i];
        }
        
    }
    return Slargest;
}

int SecondSmallest(vector<int> &a, int n)
{
    int Fsmallest = INT_MAX;
    int Ssmallest = INT_MAX;

    for(int i = 0;i < n;i++)
    {
        if(a[i] < Fsmallest)
        {
            Ssmallest = Fsmallest;
            Fsmallest = a[i];
        }
        else if(a[i] > Fsmallest && a[i] < Ssmallest)
        {
            Ssmallest = a[i];
        }
    }

    return Ssmallest;

}

vector<int> orderedElemenet(int n,vector<int>a)
{
  int ssmallest = SecondSmallest(a,n); 
  int slargest = SecondLargest(a,n);

  return {
    slargest,
    ssmallest
  };
}

int main()
{
    vector<int> array = {1,1,2,7,7,6};
    
    int n = array.size();
    
    vector<int> Result = orderedElemenet(n,array);
    cout<<Result[0]<<" "<<Result[1]<<endl;

    return 0;
}