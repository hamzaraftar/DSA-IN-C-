#include <iostream>
using namespace std;
int queue[5];
int front = -1;
int rear = -1;

// for insert in Queue

void enqueue(int x)
{
    if (rear == 5 - 1)
    {
        cout << "Queue is full" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

// deletion in Queue
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty " << endl;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        cout << "Dequede element  queue is " << queue[front] << endl;
        front++;
    }
}

// Display queue data

void Display()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty " << endl;
    }
    else
    {
        for (int i = front; i < rear + 1; i++)
        {
            cout << "Queue elements are " << queue[i] << endl;
        }
    }
}

void Peek()
{
    cout << "Data in frot is " << queue[front]<< endl;
}
int main()
{
    return 0;
}