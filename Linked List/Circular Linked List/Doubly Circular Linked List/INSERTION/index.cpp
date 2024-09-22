#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head, *tail;

void CreateDCLL()
{
    int choise;
    head = 0;
    while (choise)
    {
        node *newNode = new node;
        cout << "Enter data :" << endl;
        cin >> newNode->data;
        if (head == 0)
        {
            head = tail = newNode;
            head->next = head;
            head->prev = head;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            newNode->next = head;
            head->prev = newNode;
            tail = newNode;
        }
        cout << "Do you want to continue press(0,1)" << endl;
        cin >> choise;
    }
}

void insertionAtBeg()
{
    cout << "Insertion at begnning :" << endl;
    node *newNode = new node;
    cout << "Enter data " << endl;
    cin >> newNode->data;
    newNode->next = head;
    head->prev = newNode;
    newNode->prev = tail;
    tail->next = newNode;
    head = newNode;
}

void Display()
{
    cout << "The node in Circular Linklist are :" << endl;
    struct node *temp;
    temp = head;
    if (head == 0)
    {
        cout << "List is Empty :" << endl;
    }
    else
    {
        while (temp != tail)
        {
            cout << temp->data << " " << endl;
            temp = temp->next;
        }
        cout << temp->data << " " << endl;
    }
}

int main()
{
    CreateDCLL();
    Display();
    insertionAtBeg();
    Display();
    return 0;
}