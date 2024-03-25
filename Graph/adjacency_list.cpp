#include <iostream>
#include <vector>
using namespace std;

void add_edge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void display(vector<int> adj[], int v)
{
    for(int i=0;i<v;i++)
    {
        for(int x:adj[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int v=4;
    vector<int> adj[v];
    add_edge(adj,0,1);
    add_edge(adj,0,2);
    add_edge(adj,1,2);
    add_edge(adj,1,3);
    display(adj,v);

    return 0;
}