#include<iostream>
using namespace std;
void Insertion(int* arr, int size){
    for(int i=1; i< size; i++){
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
    int arr[] = {3, 43, 3, 2, 5,3 ,4, 5,32, 5,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    Insertion(arr, size);
    for(int i=0; i<size;i++){
        cout << arr[i]<< " ";
    }
    return 0;
}