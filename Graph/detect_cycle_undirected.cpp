#include<bits/stdc++.h> 
using namespace std;

bool DFS_rec(vector<int> adj[], int s, bool visited[], int parent)
{
    visited[s]=true;
    for(int u:adj[s])
    {
        if(visited[u]==false)
        {
            if(DFS_rec(adj,u,visited,s)==true)
            {
                return true;
            }
        }
        else if(u!=parent)
        {
            return true;
        }   
    }
    return false;
}

bool DFS(vector<int> adj[], int V, int s)
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
            if(DFS_rec(adj,s,visited,-1)==true)
            {
                return true;
            }
        }
    }
    return false;
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() 
{ 
	int V=4;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,1,2);  
	addEdge(adj,2,3); 
	addEdge(adj,1,3);
	cout<<boolalpha<<DFS(adj,V,0); 

	return 0; 
} 
