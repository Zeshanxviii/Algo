#include<bits/stdc++.h>
using namespace std;
//brute force solution
int main()
{
    int k = 3;
    int arr[] = {1,2,3};
    int cnt = 0;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            int sum = 0;
            for(int n=i;n<=j;n++)
            {
                sum = sum + arr[n]; 
            }
            if(sum==k)
            {
                cnt++;
            }
        }
    }

    cout<<cnt<<" Answer"<<endl;
    return 0;
}