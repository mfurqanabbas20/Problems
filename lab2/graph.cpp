#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;
class Graph{
    public:
    unordered_map<int, list<int>> adj;
    void AddEdge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void print()
    {
        for (auto i : adj)
        {
            cout << i.first << " - > ";
            for (auto j : i.second)
            {
                cout << j << " , ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g;
    g.AddEdge(1, 2);
    g.AddEdge(2, 3);
    g.print();
    return 0;
}