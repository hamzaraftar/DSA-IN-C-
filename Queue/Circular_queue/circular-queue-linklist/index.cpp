#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;

void enqueue(int x)
{
    node *newNode = new node;
    newNode->data = x;
    newNode->next = 0;
    if (rear == 0)
    {
        front = rear = newNode;
        rear->next = front;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }
}
void dequeue()
{
    struct node *temp;
    temp = front;
    if (front == 0 && rear == 0)
    {
        cout << "Underflow " << endl;
    }
    else if (front == rear)
    {
        front = rear = 0;
        delete (temp);
    }

    else
    {
        front = front->next;
        rear->next = front;
        delete (temp);
    }
}
void Peek()
{
    cout << front->data;
}
void Display()
{
    struct node *temp;
    temp = front;
    while (temp->next != rear->next)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << temp->data << endl;
}
int main()
{
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    Display();
    return 0;
}