#include<iostream>
using namespace std;
int arr[10][10];
class graph{
    public:
    void addEdge(int u, int v){
        arr[u][v] = 1;
        arr[v][u] = 1;
    }
    void print(int e){
        for(int i=0; i<e; i++){
            for(int j=0; j<e; j++){
                cout << arr[i][j] << "   ";
            }
            cout << endl;
        }
    }
};
int main()
{
    graph g;
    g.addEdge(1, 2);
    g.addEdge(3, 2);
    g.print(2);

    return 0;
}