#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

struct queue
{
    Node* front, *rear;
    int size;
    queue()
    {
        front=NULL;
        rear=NULL;
        size=0;
    }

    void enqueue(int x)
    {
        Node *newnode= new Node(x);
        size++;
        if(front==NULL)
        {
            front=rear=newnode;
        }
        rear->next=newnode;
        rear=newnode;
    }

    void deque()
    {
        if(front==NULL)
        {
            return;
        }
        size--;
        Node*temp=front;
        front=front->next;
        if(front==NULL)
        {
            rear=NULL;
        }
        delete(temp);
    }

    int length()
    {
        return size;
    }

};

int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.deque();
    cout<<q.length()<<endl;
    cout<<"Queue Front: "<<(q.front)->data<<endl; 
	cout<<"Queue Rear: "<<(q.rear)->data; 
    return 0;
}