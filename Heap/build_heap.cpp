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

    void min_heapify(int i)
    {
        int lt=left(i);
        int rt=right(i);
        int smallest=i;
        if(lt<size && arr[lt]<arr[i])
        {
            smallest=lt;
        }
        if(rt<size && arr[rt]<arr[smallest])
        {
            smallest=rt;
        }
        if(smallest!=i)
        {
            swap(arr[i],arr[smallest]);
            min_heapify(smallest);
        }
    }

    void build_heap()
    {
        for(int i=(size-2)/2;i>=0;i--)
        {
            min_heapify(i);
        }
    }
};

int main()
{
    min_heap h(10);

    return 0;
}