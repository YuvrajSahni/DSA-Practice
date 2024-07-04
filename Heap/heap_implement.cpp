#include <iostream>
using namespace std;

class min_heap
{
    int *arr;
    int size;
    int capacity;

    public:
    min_heap(int c)
    {
        size=0;
        capacity=c;
        arr=new int[c];
    }

    int left(int i)
    {
        return 2*i+1;
    }
    int right(int i)
    {
        return 2*i+2;
    }
    int parent(int i)
    {
        return (i-1)/2;
    }
};

int main()
{
    min_heap(10);  
    return 0;
}