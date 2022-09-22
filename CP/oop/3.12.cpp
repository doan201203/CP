#include "bits/stdc++.h"
using namespace std;
const int N = 100;

class Stack
{
    private:
        int sz;
        int a[N];
    public:
        Stack();
        bool isEmpty();
        bool isFull();
        void Push(int v);
        void Pop();
        void Print();
};

Stack :: Stack()
{
    this -> sz = 0;
}

bool Stack :: isEmpty()
{
    if(this -> sz == 0)
        return true;
    return false;
}

bool Stack :: isFull()
{
    if(this -> sz >= N)
        return true;
    return false;
}

void Stack :: Push(int v)
{
    if(isFull())
    {
        cout << "Stack overflow\n";
        return;
    }
    a[sz++] = v;
}
void Stack :: Pop()
{
    if(isEmpty())
    {
        cout << "Stack is empty\n";
        return;
    }
    sz--;
}

void Stack :: Print()
{
    for(int i = sz - 1 ; i >= 0 ; i--)
    {
        cout << a[i] << '\n';
    }
}

int main()
{
    Stack a;
    a.Push(5);
    a.Pop();
    for(int i = 1 ; i <= 10 ; i++)
        a.Push(i);
    a.Pop();
    a.Print();
}
