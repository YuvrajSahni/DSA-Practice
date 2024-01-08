#include<bits/stdc++.h> 
using namespace std;

bool DFS_rec(vector<int> adj[], int s, bool visited[], bool recst[])
{
    visited[s]=true;
    recst[s]=true;
    for(int u:adj[s])
    {
        if(visited[u]==false && DFS_rec(adj,u,visited,recst)==true)
        {
            return true;
        }
        else if(recst[u]==true)
        {
            return true;
        }
    }
    recst[s]=false;
    return false;
}

bool DFS(vector<int> adj[], int V)
{
    bool visited[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    bool recst[V];
    for(int i=0;i<V;i++)
    {
        recst[i]=false;
    }
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        {
            if(DFS_rec(adj,i,visited,recst)==true)
            {
                return true;
            }
        }
    }
    return false;
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}

int main() 
{ 
	int V=6;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,2,1);  
	addEdge(adj,2,3); 
	addEdge(adj,3,4);
	addEdge(adj,4,5);
	addEdge(adj,5,3);
	cout<<boolalpha<<DFS(adj,V); 

	return 0; 
} 
