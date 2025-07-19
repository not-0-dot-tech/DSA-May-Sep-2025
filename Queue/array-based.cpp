#include <iostream>
#define size 5
using namespace std;

class Queue
{
    int arr[size];
    int front = -1, rear = -1;

public:
    bool isEmpty()
    {
        return front == -1 && rear == -1;
    }

    bool isFull()
    {
        return (rear + 1) % size == front;
    }

    void enQ(int data)
    {
        if (isFull())
        {
            cout << "Queue is full!" << endl;
            return;
        }
        if (isEmpty())
            front = rear = 0;
        else
            rear = (rear + 1) % size;

        arr[rear] = data;
    }

    void deQ()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        if (front == rear)
            front = rear = -1; // Reset queue when it becomes empty
        else
            front = (front + 1) % size;
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Front element: " << arr[front] << endl;
    }
};

int main()
{
    Queue q;

    q.enQ(10);
    q.enQ(20);
    q.enQ(30);
    q.peek(); // Should print 10
    q.deQ();
    q.peek(); // Should print 20
    q.enQ(40);
    q.enQ(50);
    q.enQ(60);
    q.enQ(70); // Should print "Queue is full!"
    q.deQ();
    q.deQ();
    q.deQ();
    q.deQ();
    q.deQ();
    q.peek(); // Should print "Queue is empty!"
    q.deQ();  // Should print "Queue is empty!"
    return 0;
}
