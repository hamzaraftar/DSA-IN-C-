#include <iostream>
using namespace std;

int dequeue[5];
int front = -1;
int rear = -1;
// Enqueue in front
void enqueueFront(int x)
{
    if ((front == 0 && rear == 5 - 1) || (front == rear + 1))
    {
        cout << "Queue is full " << endl;
    }
    else if (front == 0 && rear == 5 - 1)
    {
        front = rear = 0;
        dequeue[front] = x;
    }
    else if (front = 0)
    {
        front = 5 - 1;
        dequeue[front] = x;
    }
    else
    {
        front--;
        dequeue[front] = x;
    }
}
// Enqueue in Rear
void enqueueRear(int x)
{
    if ((front == 0 && rear == 5 - 1) || (front == rear + 1))
    {
        cout << "Queue is full " << endl;
    }
    else if (front == 0 && rear == 5 - 1)
    {
        front = rear = 0;
        dequeue[rear] = x;
    }
    else if (rear == 5 - 1)
    {
        rear = 0;
        dequeue[rear] = x;
    }
    else
    {
        rear++;
        dequeue[rear] = x;
    }
}
void Display()
{
    int i = front;
    while (i != rear)
    {
        cout << dequeue[i] << endl;
        i = (i + 1) % 5;
    }
    cout << dequeue[rear]<< endl;
}
int main()
{
    enqueueFront(2);
    enqueueFront(3);
    enqueueRear(4);
    enqueueRear(5);
    Display();
    return 0;
}