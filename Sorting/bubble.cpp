#include <iostream>
using namespace std;
void BubbleSort(int* arr, int size)
{ 
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            swap(arr[j], arr[j+1]);
        }
    }
}
int main()
{
    int arr[] = {43, 5, 2, 30, 39};
    int size = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, size);
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}