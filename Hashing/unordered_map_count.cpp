#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map <string,int> m;
    m["gfg"]=20;
    m["ide"]=30;
    m.insert({"courses",300});
    if(m.count("ide")>0)
    {
        cout<<"Found";
    }
    else
    {
        cout<<"Not found";
    }
    return 0;
}