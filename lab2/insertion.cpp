#include <iostream>
using namespace std;
void InsertionSort(int* arr, int size){
    for(int i=1; i<size; i++){
        int j;
        int temp = arr[i];
        for(j=i-1; j>=0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else
            break;
        }
        arr[j+1] = temp;
    }

}
int main()
{
    int arr[10] = {5, 4, 9, 2, 3, 5, 9, 0, 1, -1,};
    int size = 10;
    InsertionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}