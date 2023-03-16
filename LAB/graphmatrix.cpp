#include<iostream>
using namespace std;
int arr[10][10];
class Graph{
    public:
    void insert_edge(int u, int v){
        arr[u][v] = 1;
        arr[v][u] = 1;
    }
    void display(int n){
        for(int i=0; i<n;i++)
        {
            for(int j=0;j<n;j++){
                cout << arr[i][j] << "   ";
            }
            cout << endl;
        }
    }
};
int main(){
    Graph g;
    g.insert_edge(1, 2);
    g.insert_edge(3, 2);
    g.display(3);

}