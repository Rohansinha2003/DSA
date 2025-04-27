#include<iostream.
#include<string>
#include<queue>

using namespace std;

class node
{
    public:
    int data
    Node * next *prev;

    node(int value)
    {
        data=value;
        next null;
        prev = null;

    }
    
};

class dequeue
    {
        node *front,*rear;
        public:
        dequeue()
        {
            front =rear= Null;
        }

        //push front
        void push_front(int x)
        {
            if(front== null)
            {
                front = rear = new node(x);
                return;
            }
            else
            {
                node *temp = new node(x);
                temp->next =front;
                front ->prev = temp;
                front = temp;
                return;
            }
        }

        void push_back(int x)
        {
            if(front== null)
            {
                front = rear = new node(x);
                return;
            }
            else
            {
                node *temp = new node(x);
                rear->next = temp;
                temp->prev = rear;
                rear=temp;
                return;
            }

        }
        void pop_front()
        {
            if(front== null)
            {
                cout<<"Queue is empty";
                return;
            }
            else
            {
                node *temp = front;
                front = front->next;
                delete temp;
            }
        }
        void pop_back()
        {
            if(front== null)
            {
                cout<<"Queue is empty";
                return;
            }
            else
            {
                node *temp = rear;
                rear = rear->prev;
                delete temp;
            }
        }

        int start()
        {
            if(front==null)
            return -1;
            else 
            return front->data;
        }
        int end()
        {
           if(front == null)
           return -1;
           elsereturn rear ->data;
        }
    };




int main(){
    dequeue q;
    q.push_front(1);
    q.push_front(2);
    q.push_front(3);
    q.push_back(4);
    q.push_back(5);

    
}