#include <iostream>
#include <queue>
#include <vector>
#include <stack>
using namespace std;
// A function to add edges to the graph
void add_edge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
// A function to perform BFS traversal of the graph
void BFS(vector<int> adj[], int s, bool visited[])
{
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        cout << u << " ";
        q.pop();
        for (int v : adj[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
void DFS(vector<int> adj[], int s, bool visited[])
{
    stack<int> st;
    visited[s] = true;
    st.push(s);
    while (!st.empty())
    {
        int u = st.top();
        cout << u << " ";
        st.pop();
        for (int v : adj[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                st.push(v);
            }
        }
    }
}
int main()
{
    int V = 6;                 // number of vertices in the graph
    vector<int> adj[V];        // adjacency list representation of the graph
    bool visited[V] = {false}; // array to keep track of visited vertices
    // Adding edges to the graph
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 2);
    add_edge(adj, 1, 3);
    add_edge(adj, 1, 4);
    add_edge(adj, 2, 4);
    add_edge(adj, 3, 4);
    add_edge(adj, 3, 5);
    cout << "BFS Traversal: ";
    BFS(adj, 0, visited); // perform BFS traversal starting from vertex 0
    cout << endl;
    // Reset visited array
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }
    cout << "DFS Traversal: ";
    DFS(adj, 0, visited); // perform DFS traversal starting from vertex 0
    cout << endl;
    return 0;
}