#include<iostream>
#include<queue>
#include<vector>
using namespace std; 

void kahn(vector<int> adj[], int V) 
{ 
	vector<int> in_degree(V,0);
	for(int i = 0; i < V; i++) 
	{
        for(int x:adj[i])
        {
            in_degree[x]++;
        }
    } 

	queue<int>  q;
	
	for(int i=0;i<V;i++)
    {
        if(in_degree[i]==0)
        {
            q.push(i);
        }
    } 
    int count=0;
	while(!q.empty()) 
	{ 
		int u = q.front(); 
		q.pop();
		 
		for(int v:adj[u]){
		    if(--in_degree[v]==0){
		        q.push(v);
		    }
		}
        count++; 
	}
    if(count!=V)
    {
        cout<<"There exists a cycle";
    } 
    else
    {
        cout<<"No cycle";
    }
} 

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}

int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,4,1); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,3,1);
	kahn(adj,V); 

	return 0; 
} 
