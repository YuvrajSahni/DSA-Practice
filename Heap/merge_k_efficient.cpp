#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct triplet
{
    int val, apos, vpos;
    triplet(int v,int ap,int vp)
    {
        val=v;
        apos=ap;
        vpos=vp;
    }
};

struct my_comp
{
    bool operator()(triplet &t1, triplet &t2)
    {
        return t1.val>t2.val;
    }
};

vector<int> merge_k(vector<vector<int>> arr)
{
    vector<int> res;
    priority_queue<triplet, vector<triplet>, my_comp> pq;
    for(int i=0;i<arr.size();i++)
    {
        triplet t( arr[i][0],i,0);
        pq.push(t);
    }
    while(pq.empty()==false)
    {
        triplet curr=pq.top();
        pq.pop();
        res.push_back(curr.val);
        int ap=curr.apos;
        int vp=curr.vpos;
        if(vp+1<arr[ap].size())
        {
            triplet t(arr[ap][vp+1], ap, vp+1);
            pq.push(t);
        }
    }
    return res;
}

int main()
{
    vector<vector<int>> arr{{10,20,30},{5,15},{1,9,11,18}};
    vector<int> res=merge_k(arr);
    for(auto x:res)
    {
        cout<<x<<" ";
    }
    
    return 0;
}