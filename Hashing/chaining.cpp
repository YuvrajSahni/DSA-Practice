#include <iostream>
#include <list>
using namespace std;

struct MyHash
{
    int Bucket;
    list<int> *table;
    MyHash(int b)
    {
        Bucket = b;
        table = new list<int>[Bucket];
    }
    void insert(int k)
    {
        int i = k % Bucket;
        table[i].push_back(k);
    }
    bool search(int k)
    {
        int i = k % Bucket;
        for (auto x : table[i])
           if (x == k)
              return true;
        return false;      
    }
    void remove(int k)
    {
        int i = k % Bucket;
        table[i].remove(k);
    }
};

int main() 
{ 
    MyHash mh(7);
    mh.insert(10);
    mh.insert(20);
    mh.insert(15);
    mh.insert(7);
    cout << mh.search(10) << endl;
    mh.remove(15);
    cout << mh.search(15);
} 