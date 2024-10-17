#include<iostream>
using namespace std;

int main()
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
}
