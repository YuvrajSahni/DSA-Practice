#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map <string,int> m;
    m["gfg"]=20;
    m["ide"]=30;
    m.insert({"courses",300});
    if(m.find("ide")!=m.end())
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    return 0;
}