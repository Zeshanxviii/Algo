#include<iostream>

int reverse(int arr[],int start,int end)
{
    int temp;
    if(arr[end]>arr[start])
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        reverse(arr,arr[0+1],end-1);
    }

    return arr[end];
}
int main(int argc, char const *argv[])
{
    int n,arr[n];
    std::cout<<"Enter size of array :";
    std::cin>>n,"\n";
    std::cout<<"enter array :";
    for (int i = 0; i < n; i++)
    {
        std::cin>>arr[i];
    }
    int Arr[n] = reverse(arr,0,n);
    std::cout<<"Reversed Array";   

    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i];
    }
    

    return 0;
}
