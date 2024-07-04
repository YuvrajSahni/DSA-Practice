#include <iostream>
using namespace std;

struct queue
{
    int size;
    int front,rear,cap;
    int *arr;
    queue(int c)
    {
        cap=c;
        size=0;
        front=0;
        rear=-1;
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
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
    }

    void deque()
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

    int getrear()
    {
        if(isempty())
        {
            return -1;
        }
        return rear;
    }
};

int main()
{
    struct queue q(4);
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.deque();
    q.enqueue(50);
    cout<<q.getfront()<<endl;
    cout<<q.getrear();
    return 0;
}