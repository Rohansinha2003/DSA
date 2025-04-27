#include<iostream>
#include<string>
#include<queue>

using namespace std;

class node
{
    public:
    int data;
    node *next;
    node *prev;

    node(int value)
    {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
    
};

class Dequeue
{
    node *front, *rear;
    public:
    Dequeue()
    {
        front = rear = nullptr;
    }

    //push front
    void push_front(int x)
    {
        if(front == nullptr)
        {
            front = rear = new node(x);
            return;
        }
        else
        {
            node *temp = new node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
            return;
        }
    }

    void push_back(int x)
    {
        if(front == nullptr)
        {
            front = rear = new node(x);
            return;
        }
        else
        {
            node *temp = new node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            return;
        }
    }
    void pop_front()
    {
        if(front == nullptr)
        {
            cout << "Queue is empty";
            return;
        }
        else
        {
            node *temp = front;
            front = front->next;
            if(front != nullptr)
                front->prev = nullptr;
            else
                rear = nullptr;
            delete temp;
        }
    }
    void pop_back()
    {
        if(front == nullptr)
        {
            cout << "Queue is empty";
            return;
        }
        else
        {
            node *temp = rear;
            rear = rear->prev;
            if(rear != nullptr)
                rear->next = nullptr;
            else
                front = nullptr;
            delete temp;
        }
    }

    int start()
    {
        if(front == nullptr)
            return -1;
        else 
            return front->data;
    }
    int end()
    {
       if(front == nullptr)
           return -1;
       else
           return rear->data;
    }
};

int main(){
    Dequeue q;
    q.push_front(1);
    q.push_front(2);
    q.push_front(3);
    q.push_back(4);
    q.push_back(5);

    return 0;
}
