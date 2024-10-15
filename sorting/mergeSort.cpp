#include <iostream>
using namespace std;

void merge(int *arr, int begin, int mid, int end)
{
    int len1 = mid - begin +1;
    int len2 = end - mid;
    // define array
    int *first = new int[len1];
    int *Second = new int[len2];

    // copy value
    int mainarray = begin;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainarray++];
    }
    mainarray = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        Second[i] = arr[mainarray++];
    }

    // making index
    int index1 = 0;
    int index2 = 0;
    mainarray = begin;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < Second[index2])
        {
            arr[mainarray++] = first[index1++];
        }
        else
        {
            arr[mainarray++] = Second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainarray++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainarray++] = Second[index2++];
    }

    delete[] first;
    delete[] Second;
}
void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    // merge Function
    merge(arr, s, mid, e);
}

int main()
{
    int arr[] = {38, 46, 24, 52, 20, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, size-1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }

    return 0;
}