#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *tail;
void CreateCLL()
{
    int choise = 1;
    tail = 0;
    while (choise)
    {
        node *newNode = new node;
        cout << "Enter data :" << endl;
        cin >> newNode->data;
        newNode->next = 0;
        if (tail == 0)
        {
            tail = newNode;
            tail->next = newNode;
        }
        else
        {
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
        }
        cout << "Do you want to continue press (1,0) " << endl;
        cin >> choise;
    }
}

void Reverse()
{
    cout << "After Reverse : " << endl;
    struct node *current, *previus, *nextNode;
    current = tail->next;
    nextNode = current->next;
    while (current != tail)
    {
        previus = current;
        current = nextNode;
        nextNode = current->next;
        current->next = previus;
    }
    nextNode->next = tail;
    tail = nextNode;
}

void DisplayCLL()
{
    cout << "The nodes in linklist are :" << endl;
    struct node *temp;
    if (tail == 0)
    {
        cout << "List is Empty :" << endl;
    }
    else
    {
        temp = tail->next;
        while (temp->next != tail->next)
        {
            cout << temp->data << "   " << endl;
            temp = temp->next;
        }
        cout << temp->data << "   " << endl;
    }
}

int main()
{
    CreateCLL();
    DisplayCLL();
    Reverse();
    DisplayCLL();
    return 0;
}