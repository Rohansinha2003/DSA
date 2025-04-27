#include <iostream>
using namespace std;


//implement queue using array

class Queue
{
    int *arr;
    int front,rear,size;


    public:
    //constructor
    Queue(int n)
    {

        arr = new int[n];
        size = n;
        front= rear-1;

    }

    //If Queue is empty or not
    bool Isempty()
    {

        return front== -1;

    }

    //Queue is full or not
    bool (Isfull())
    {
        return rear== size-1;
    }

    //push element in Queue

    void push(int x)
    {
        //empty
        if(Isempty())
        {
            cout<<"pushed" << x << "into the queue\n";
            front= rear=0;
            arr[0]=x;

        }
        //full
        else if(Isfull())
        {
           cout<<"Queue is overflow";

        }
        //Insert
        else
        {
            rear = rear+1;
            arr[rear]=x;
        }

    }

    //POP Element
    void pop()
    {
        if(Isempty())
        {
            cout<<"Queue is undedrflow";
            return;
        }
        else
        {
            if(front==rear)
             {
                cout<<"popped"<< arr[front]<< "into the queue\n"; 
               front = rear =-1;
             
            }  
            else
            {
                cout<<"Popped"<<arr[front]<<"into the Queue\n";
                front=front+1;
            }
            

        }
    }

    //satarting me kon sa element rakha hai
    int start()
    {
        if(Isempty())
        {
            cout<<"Queue is empty";
            return -1;
        }
        else
            return arr[front];
        
    }

    


};
int main()
{
    Queue q(5);
    
    q.push(5);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(59);

    cout<<q.start()<<endl;




}