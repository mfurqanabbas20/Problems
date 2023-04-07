#include <iostream>
using namespace std;
void Insert(int *arr, int size, int data)
{
    // function to insert into the array
    for (int i = 0; i < size; i++)
    {
        // code to be uploaded soon.
    }
}
int main()
{
    int data;
    int position;
    int arr[100];
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the data to insert in the array " << endl;
    cin >> data;
    cout << "Enter the position to insert in the array " << endl;
    cin >> position;
    Insert(arr, size, data);
    return 0;
}