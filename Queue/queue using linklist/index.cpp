#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;
// Creation of Queue
void Enqueue(int x)
{
    node *newNode = new node;
    newNode->data = x;
    newNode->next = 0;
    if (front == 0 && rear == 0)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}
// Display of Queue
void Display()
{
    cout << "The data in  queue  is :" << endl;
    struct node *temp;
    if (front == 0 && rear == 0)
    {
        cout << "Queue is Empty : " << endl;
    }
    else
    {
        temp = front;
        while (temp != 0)
        {
            cout << temp->data << "  " << endl;
            temp = temp->next;
        }
    }
}
// Deletion in Queue
void Dequeue()
{
    struct node *temp;
    temp = front;
    if (front == 0 && rear == 0)
    {
        cout << "Queue is Empty : " << endl;
    }
    else
    {
        cout << "Delete elements are " << front->data << endl;
        front = front->next;
        delete (temp);
    }
}

void Peek()
{
    if (front == 0 && rear == 0)
    {
        cout << "Queue is Empty : " << endl;
    }
    else
    {
        cout << "Top queue is " << front->data << endl;
    }
}
int main()
{
    Enqueue(2);
    Enqueue(3);
    Enqueue(5);
    Display();
    Dequeue();
    Display();
    return 0;
}