#include <iostream>
using namespace std;

struct deque
{
    int size,cap,front;
    int *arr;
    deque(int c)
    {
        cap=c;
        size=0;
        front=0;
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
        int new_rear=(front+size)%cap;
        arr[new_rear]=x;
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
        return (front+size-1)%cap;
    }
    void insertfront(int x)
    {
        if(isfull())
        {
            return;
        }
        front=(front+cap-1)%cap;
        arr[front]=x;
        size++;
    }
    void deletefront()
    {
        if(isempty())
        {
            return;
        }
        front=(front+1)%cap;
        size--;
    }
    int getfront()
    {
        if(isempty())
        {
            return -1;
        }
        return front;
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