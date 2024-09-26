#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};
struct node *top = 0;

void Push(int x)
{
    node *newNode = new node;
    newNode->data = x;
    newNode->link = top;
    top = newNode;
}

void Display()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        cout << "List is empty " << endl;
    }
    else
    {
        while (temp != 0)
        {
            cout << temp->data << "  " << endl;
            temp = temp->link;
        }
    }
}

void Peek()
{
    if (top == 0)
    {
        cout << "Stack is empty :" << endl;
    }
    else
    {
        cout << "Top elemtent is " << top->data << "  " << endl;
    }
}

void Pop()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        cout << "Underfloe condition" << endl;
    }
    else
    {
        cout << "pop element is " << top->data << endl;
        top = top->link;
        delete (temp);
    }
}

int main()
{
    Push(5);
    Display();
    Peek();
    Pop();
    return 0;
}
