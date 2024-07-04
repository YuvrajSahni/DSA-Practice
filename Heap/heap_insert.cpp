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

    void insert(int x)
    {
        if(size==capacity)
        {
            return;
        }
        size++;
        arr[size-1]=x;
        for(int i=size-1; i!=0 && arr[parent(i)]>arr[i]; )
        {
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
};

int main()
{
    min_heap h(10);
    h.insert(10);
    h.insert(20);  
    h.insert(15);  
    h.insert(40);  
    h.insert(50);  
    h.insert(100);  
    h.insert(25);
    h.insert(45);  
    h.insert(12);

    return 0;
}