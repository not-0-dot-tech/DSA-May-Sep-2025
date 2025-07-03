#include <iostream>
using namespace std;

class Stack
{
private:
    int n = 5;
    int stack[5];
    int top = -1;

public:
    void push(int value)
    {
        if (top == n - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        stack[++top] = value;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        top--;
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Top element is " << stack[top] << endl;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.peek(); // Should print 30
    s.pop();
    s.peek(); // Should print 20
    s.pop();
    s.peek(); // Should print 10
    s.pop();
    s.peek(); // Should print "Stack is empty"
    s.pop();  // Should print "Stack underflow"
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90); // Should print "Stack overflow"
    return 0;
}