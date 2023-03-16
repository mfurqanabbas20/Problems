#include<iostream>
using namespace std;
int vertArr[20][20];
int count = 0;
void displayMatrix(int v){
    int i, j;
    for(int i=0; i<v;i++){
        for(int j=0; j<v;j++){
            cout << vertArr[i][j] << "   ";
        }
        cout << endl;
    }
}
void addEdge(int u, int v){
    vertArr[u][v] = 1;
    vertArr[u][v] = 1;
}
int main()
{
    int v = ;
    addEdge(1, 2);
    addEdge(2, 3);
    addEdge(3, 1);
    displayMatrix(v);

    return 0;
}