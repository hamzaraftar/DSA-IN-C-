#include <iostream>
using namespace std;
int queue[5];
int front = -1;
int rear = -1;

void Enqueue(int x)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if (((rear + 1) % 5) == front)
    {
        cout << "Queue is full :" << endl;
    }
    else
    {
        rear = ((rear + 1) % 5);
        queue[rear] = x;
    }
}

void Dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty : " << endl;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        cout << "Decude element is " << queue[front];
        front = (front + 1) % 5;
    }
}
void Display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty : " << endl;
    }
    else
    {
        while (i != rear)
        {
            cout << queue[i] << endl;
            i = (i + 1) % 5;
        }
        cout << queue[rear] << endl;
    }
}

int main()
{
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
    Enqueue(6);
    Display();
    return 0;
}