#include<bits/stdc++.h>
using namespace std;

//brute force approch
/*int main()
{
    int arr[5] = {1 , 2 , 1 , 5 , 1};
    for( int i = 0; i < 5; i++)
    {
        int count = 0;
        for(int j = 0; j < 5 ; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                if(count > 5/2)
                {
                    cout<<arr[i]<<endl;
                    return 0;
                    
                }
            }
        }

    }
    return 0;
}*/



//better approch
/*
int main()
{
    vector<int> arr = {1,2,1,2,3,1,1};
    int n = arr.size();
    map<int,int>mapp;

    for(int i=0; i<n; i++)
    {
        mapp[arr[i]]++;
    }

    for( auto it:mapp )
    {
        if(it.second > n/2)
        {
            cout<<it.first<<endl;
        }

    }

    cout<<endl;

    return 0;
}*/


//optimize solution using hashmap;
int findcandidateElement(vector<int> &nums)
{
    int max = 0, cnt = 1;

    for(int i=1; i<nums.size(); i++)
    {
        if(nums[max]==nums[i])
        {
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt==0)
        {
            max = i;
            cnt = 1;
        }
    }

    return nums[max];
}

bool ismajority(vector<int > &nums,int cand)
{
    int count = 0;
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i]==cand)
        {
            count++;
        }
    }

    if(count > nums.size()/2) 
    return 1;
    else  
    return 0;
}

int main()
{
    vector<int> nums = {2,2,1,1,1,2,2};
    int cand = findcandidateElement(nums);
    cout<<cand;
    if(ismajority(nums,cand))
    {
        cout<<cand<<endl;
    }
    else{
        cout<<-1;
    }

    return 0;
}