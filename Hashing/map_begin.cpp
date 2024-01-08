#include <iostream>
#include <map>

using namespace std;

int main()
{
    map <int,int> m;
    m.insert({10,200});
    m.insert({5,300});
    m.insert({20,400});
    for(auto it =m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "; 
        cout<<(*it).second<<endl; 
    }
    m.clear();
    cout<<m.size()<<endl;
    return 0;
}