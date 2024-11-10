#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 8;
    int arr[n] = {1,1,0,0,1,1,1,0};
    int max = 0, count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            count++;
            if(count>max)
            {
                max = count;
            }
            else{
                max = count;
            }
        }
        else{
            count = 0;
        }

    }

    cout<<max<<endl;
    return 0;
}