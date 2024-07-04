#include <iostream>
#include <map>

using namespace std;

int main()
{
    map <int,int> m;
    m.insert({10,200});
    m.insert({5,300});
    m.insert({20,400});
    if(m.count(5)==0)
    {
        cout<<"Not found";
    }
    else
    {
        cout<<"Found";
    }
    return 0;
}