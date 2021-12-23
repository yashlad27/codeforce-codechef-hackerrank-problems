#include<iostream>
using namespace std;

#define MAX 1000

class stack {
    int top;

    public:
    int a[MAX]; 

    stack()
    {
        top = -1;
    }

    bool push(int x);
    int pop();
    int peek();
    bool isempty();
};

bool stack::push(int x)
{
    if(top>=(MAX-1))
    {
        cout<<"Stack Overflow";
        return true;
    }
    else
    {
        a[++top]=x;
        cout<<x<<" pushed into stack";
    }
}

int stack::pop()
{
    if(top<0)
    {
        cout<<"Stack Underflow";
        return 0;
    }
    else{
        int x = a[top--];
        return x;
    }
}

int stack::peek()
{
    if(top<0)
    {
        cout<<"Stack is empty";
        return 0;
    }
    else
    {
        int x = a[top];
        return x;
    }
}

bool stack::isempty()
{
    return (top<0);
}

int main()
{
    class stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<s.pop()<<" Popped from stack\n";

    cout<<"Elements present in stack are: "<<endl;
    while(!s.isempty())
    {
        cout<<s.peek()<<" ";
        s.pop();
    }
    return 0;
}