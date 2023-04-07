#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class Graph{
    public:
    unordered_map<int, list<int>> adj;
    void AddEdge(int u, int v, bool direction) { 
        //direction = 0 -> undirected graph
        //direction = 1 -> directed graph
        //create an edge from u to v
        adj[u].push_back(v);
        if(direction == 0) {
            adj[v].push_back(u);
        }
    }
    void printList() { 
        for(auto i:adj){
            cout << i.first << "->";
            for(auto j:i.second){
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int n;
    cout << "Enter the NO. Of Nodes. " << endl;
    cin >> n;
    int m;
    cout << "Enter the NO. Of Edges. " << endl;
    cin >> m;
    Graph graph;
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        //creating an undirected graph
        graph.AddEdge(u, v, 0);
    }
    //printing the graph
    graph.printList();
    return 0;
}