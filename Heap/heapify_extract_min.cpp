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

    int extract_min()
    {
        if(size<=0)
        {
            return INT16_MAX;
        }
        if(size==1)
        {
            size--;
            return arr[0];
        }
        swap(arr[0],arr[size-1]);
        size--;
        min_heapify(0);
        return arr[size];
    }
};

int main()
{
    min_heap h(10);
    h.insert(20);  
    h.insert(25);  
    h.insert(30);  
    h.insert(35);  
    h.insert(40);  
    h.insert(80);  
    h.insert(32);  
    h.insert(100);  
    h.insert(70);
    h.insert(60);
    cout<<h.extract_min();  

    return 0;
}