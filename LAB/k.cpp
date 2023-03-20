#include<iostream>
#include<list>
using namespace std;

class Graph{
	public:
	int V;
	list<int> *adjLists;
	bool *visited;
	Graph(int v){
		this->V=v;
		adjLists=new list<int>[V];
		visited=new bool[V];
	}
	void addEdge(int src,int dest){
		adjLists[src].push_front(dest);
		adjLists[dest].push_front(src);

	}
	void printGraph() {
  for (int d = 0; d < V; ++d) {
    cout << "\n Vertex "
       << d << ":";
    for (auto x : adjLists[d])
      cout << "-> " << x;
    cout<<"\n"<<endl;
  }
}
void DFS(int vertex){
    visited[vertex]=true;
    list<int> adjlist= adjLists[vertex];
    cout<<vertex<<" ";
    list<int>::iterator i;
    for (i = adjlist.begin(); i != adjlist.end(); ++i)
    if (!visited[*i])
      DFS(*i);
}
void BFS(int vertex){
    visited =new bool[V];
    for(int i=0;i<V;i++)
    visited[i]=false;
    
    list<int> queue;
    visited[vertex]=true;
    queue.push_back(vertex);
    list<int>::iterator i;
    while(!queue.empty()){
        int current=queue.front();
        cout<<"Visited "<<current<<" ";
        queue.pop_front();
        
        for(i=adjLists[current].begin();i!=adjLists[current].end();i++){
            int adjVertex=*i;
            if(!visited[adjVertex]){
                visited[adjVertex]=true;
                queue.push_back(adjVertex);
            }
        }
    }
}
};
int main(){
	
	Graph g(4);
	g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
 	g.printGraph();
	g.BFS(2);
	g.DFS(2);
	return 0;
}