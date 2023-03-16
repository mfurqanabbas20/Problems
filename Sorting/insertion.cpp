#include <iostream>
using namespace std;
void InsertionSort(int* arr, int size)
{
    for(int i=1; i<size; i++)
    {
        int j;
        int temp = arr[i];
        for(j = i-1; j>=0; j--)
        {
            if(arr[j] > temp)
            {
                //Shift
                arr[j+1] = arr[j];
            }
            else //Stop here. 
            break;
        }
        arr[j+1] = temp;
    }

}
int main()
{
    int arr[] = {23, 4, 3, 321, 53, 32, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    InsertionSort(arr, size);
    cout << "The Sorted Array After Insertion Sort Is: " << endl;
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}