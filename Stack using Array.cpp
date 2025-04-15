// Stack using Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Stack
{
private :
    int* arr;
    int size;
    int top;
public :
    Stack(int s)
    {
        size = s;
        arr = new int[size] ;
        top = -1;
    }
    ~Stack()
    {
        delete []arr;
    }
    bool IsEmpty()
    {
        return top == -1;
    }
    bool IsFull()
    {
        return top == size-1;
    }
    void Push(int value)
    {
        if (IsFull())
        {
            cout << "Stack overflow, stack is full" << endl;
            return;
        }
        arr[++top] = value;
    }
    int Pop()
    {
        if (IsEmpty())
        {
            cout << "Stack underflow, stack is empty" << endl;
            return -1;
        }
        return arr[top--];
    }
    int Top()
    {
        if (IsEmpty())
        {
            cout << "Stack underflow, stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
    void Clear() {
        top = -1;
    }

    void Print()
    {
        if (IsEmpty())
        {
            cout <<  "Stack is empty" << endl;
            return ;
        }
        cout << "Stack is : ";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    int size;
    cout << "Enter size of stack" << endl;
    cin >> size;
    Stack s(size);
    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.Print();

    cout << "Top is : " << s.Top() << endl;

    s.Pop();
    s.Print();

    cout << "Top is : " << s.Top() << endl;

    s.Clear();
    s.Print();

}

