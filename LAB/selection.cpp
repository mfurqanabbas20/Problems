#include<iostream>
using namespace std;
void SelectionSort(int* arr, int size){
    for(int i=0; i<size-1; i++){
        int minIndex = i;
        for(int j=i+1; j<size;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
int main()
{
    int arr[] = {10, 23, 5, 3, 51, 52, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr, size);
    cout << "Sorted Array Is Using Selection Sort Is: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}