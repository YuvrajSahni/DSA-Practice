#include <iostream>
using namespace std;

struct queue
{
    int size;
    int cap;
    int *arr;
    queue(int c)
    {
        cap=c;
        size=0;
        arr=new int[cap];
    }
    
    bool isfull()
    {
        return size==cap;
    }

    bool isempty()
    {
        return size==0;
    }

    void enqueue(int x)
    {
        if(isfull())
        {
            return;
        }
        arr[size]=x;
        size++;
    }

    void deque()
    {
        if(isempty())
        {
            return;
        }
        for(int i=0;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
    }

    int getfront()
    {
        if(isempty())
        {
            return -1;
        }
        return 0;
    }

    int getrear()
    {
        if(isempty())
        {
            return -1;
        }
        return size-1;
    }
};

int main()
{
    struct queue q(5);
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.deque();
    cout<<q.getfront()<<endl;
    cout<<q.getrear();
    return 0;
}