#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;
class Graph{
    public:
    unordered_map<int, list<int>> adj;
    void InsertEdge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void display_list(){
        for(auto i:adj){
            cout << i.first << " -> ";
            for(auto j:i.second){
                cout << j << " , ";
            }
            cout << endl;
        }
    }
};

int main(){

    Graph g;
    g.InsertEdge(1, 2);
    g.InsertEdge(2, 3);
    g.InsertEdge(3, 1);
    g.display_list();

}
