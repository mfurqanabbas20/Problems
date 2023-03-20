#include<iostream>
#include<list>
#include<vector>
#include<stack>
#include<queue>
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
    // void DFS(int vertex){
    //     visited[vertex] = true;
    // }
    void BFS(int start){
        vector<int> adj_List[10000];
        bool visited[1000];
        queue<int> q;
        q.push(start);
        visited[start] = true;
        while(!q.empty()){
            int curr = q.front();
            cout << curr << " ";
            q.pop();
            //Add all unvisited neighbour of current vertex to queue
            for(int i=0; i < adj_List[curr].size(); i++){
                int neighbour = adj_List[curr][i];
                if(!visited[neighbour]){
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }
    }
   
};

int main(){

    Graph g;
    g.InsertEdge(0, 1);
    g.InsertEdge(0, 2);
    g.InsertEdge(1, 2);
    g.InsertEdge(2, 3);
    g.BFS(1);

}
