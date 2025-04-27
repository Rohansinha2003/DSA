#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

class stack
{
    node *top;
    int size;

public:
    stack()
    {
        top = NULL;
        size = 0;
    }

    // Push function
    void push(int value)
    {
        node *temp = new node(value);
        if (temp == NULL)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        temp->next = top;
        top = temp;
        size++;
    }

    // Pop function
    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        node *temp = top;
        top = top->next;
        delete temp;
        size--;
    }

    // Peek function
    int peek()
    {
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->data;
    }

    // IsEmpty function
    bool isempty()
    {
        return top == NULL;
    }

    // GetSize function
    int getSize()
    {
        return size;
    }

    // Destructor to prevent memory leaks
    ~stack()
    {
        while (top != NULL)
        {
            pop();
        }
    }
};

int main()
{
    stack s;
    
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Top element is: " << s.peek() << endl; // Expected: 3
    cout << "Stack size is: " << s.getSize() << endl; // Expected: 3

    s.pop();
    cout << "After pop, top element is: " << s.peek() << endl; // Expected: 2
    cout << "Stack size is: " << s.getSize() << endl; // Expected: 2

    s.pop();
    s.pop();

    cout << "Stack is empty? " << (s.isempty() ? "Yes" : "No") << endl; // Expected: Yes

    return 0;
}
