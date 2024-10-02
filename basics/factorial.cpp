#include<iostream>
using namespace std;

int Fact(int nums)
{
    if(nums<2)
    {
        return 1;
    }
    
    return nums* Fact(nums-1);
}
int main()
{   
    cout<<Fact(1);
    return 0;
}
