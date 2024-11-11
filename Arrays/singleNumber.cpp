#include<bits/stdc++.h>
using namespace std;


// using xor 

int main()
{
    int arr[5] = { 1,2,1,3,2 };
    int cnt = 0;
    for(int it:arr) cnt ^= it;
    cout<<cnt<<endl;
    return 0;
}