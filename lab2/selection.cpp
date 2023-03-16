#include<iostream>
using namespace std;
void SelectionSort(int* arr, int size){
    for(int i=0; i<size-1;i++){
        int minIndex = i;
        for(int j=i+1;j<size;j++){
            if(arr[j] <arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main()
{
    int arr[10] = {5, 4, 9, 2, 3, 5, 9, 0, 1, -1,};
    int size = 10;
    SelectionSort(arr, size);
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;

}