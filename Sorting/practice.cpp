#include<iostream>
using namespace std;
void Insertion(int* arr, int size)
{
    int j;
    for(int i=1; i < size; i++)
    {
        int temp = arr[i];
        for(j = i-1; j >=0; j--)
        {
            if(arr[j] > temp)
            {
                //shift
                arr[j + 1] = arr[j];
            }
            else 
            break;
        }
        arr[j+1] = temp;
    }
}
int main()
{
    int arr[] = {12, 4, 3,5,2, 1, 93, 32};
    int size = sizeof(arr) / sizeof(arr[0]);
    Insertion(arr, size);
    for(int i=0; i< size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}