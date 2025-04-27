#include<iostream>
using namespace std;


//Queue ko implement using linked list

class node
{
    public:
    int data;
    node*next;

    node(int value)
    {
        data=value;
        next=NULL;
    }
};

class Queue
{
    public:
    {
        front=rear=NULL;
        
    }

    //Queue is empty or not
    bool(IsEmpty)
    {
        return front=NULL;
    }

    void push()
    {
        if(IsEmpty())
        {
            cout<<"QUeue is empty";
        }
        else
        {
            rear->next = new.node(x);
            rear=rear->next;

        }
        

    }

    void pop()
    {
        if(IsEmpty())
    {
        cout << "Queue is empty";
        return -1;
    }
    else{
        cout<<"popped";
        node*temp=front;
        front= front->next;
        delete temp;
    }
    }

    int start()
    {
        if(IsEmpty())
        {
            cout<<"Queue is empty";
            return -1;
        }
        else
        return front->data;


    }
};




int main()
{

    Queue.push(5);

}