#include <iostream>
#include <algorithm>
using namespace std;

struct Point
{
    int x,y;
};

bool comp(Point p1, Point p2)
{
    return (p1.x<p2.x);
}

int main()
{
    Point arr[]={{3,10},{2,8},{5,4}};
    sort(arr,arr+3,comp);
    for(auto i:arr)
    {
        cout<<i.x<< " "<<i.y<<endl;;
    }
    
    return 0; 
}