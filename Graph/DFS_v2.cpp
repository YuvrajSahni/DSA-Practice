#include<bits/stdc++.h> 
using namespace std;

void DFS_rec(vector<int> adj[], int s, bool visited[])
{
    visited[s]=true;
    cout<<s<<" ";
    for(int u:adj[s])
    {
        if(visited[u]==false)
        {
            DFS_rec(adj,u,visited);
        }
    }
}

void DFS(vector<int> adj[], int V)
{
    bool visited[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        {
            DFS_rec(adj,i,visited);
        }
    }
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2);  
	addEdge(adj,1,2); 
	addEdge(adj,3,4);
	DFS(adj,V); 

	return 0; 
} 
