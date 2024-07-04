#include <iostream>
using namespace std;

struct deque
{
    int size,cap;
    int *arr;
    deque(int c)
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
    void insertrear(int x)
    {
        if(isfull())
        {
            return;
        }
        arr[size]=x;
        size++;
    }
    void deleterear()
    {
        if(isempty())
        {
            return;
        }
        size--;
    }
    int getrear()
    {
        if(isempty())
        {
            return -1;
        }
        return size-1;
    }
    void insertfront(int x)
    {
        if(isfull())
        {
            return;
        }
        for(int i=size-1;i>=0;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[0]=x;
        size++;
    }
    void deletefront()
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
};

int main()
{
    struct deque q(5);
    q.insertrear(10);
    q.insertfront(20);
    q.insertrear(30);
    q.insertfront(40);
    q.deletefront();
    // q.deleterear();
    cout<<q.getfront()<<endl;
    cout<<q.getrear()<<endl;
    return 0;
}