#include<iostream>
using namespace std;

/*void something(int nums){
    cout<<"Hello world\n";
    if(nums>0)
    something(nums-1);
}*/

int printN(int nums)
{   
    if(nums<1)
    return 0;
    return nums + printN(nums-1);
}

int main(int argc, char const *argv[])
{
    // something(5);
    cout<<printN(9);
    return 0;
}