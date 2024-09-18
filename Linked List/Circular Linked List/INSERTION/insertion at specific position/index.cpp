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

void insertionAtSpecificPosition()
{
    struct node *temp;
    int position, i = 1;
    cout << "Insertion  at Specific  Position :" << endl;
    cout << "Enter position Number  :" << endl;
    cin >> position;
    if (position < 0)
    {
        cout << "Invalid postion : " << endl;
    }
    else if (position == 1)
    {
        // InsertInBenningCLL();
    }
    else
    {
        cout << "Enter data :" << endl;
        node *newNode = new node;
        cin >> newNode->data;
        newNode->next = 0;
        temp = tail->next;
        while (i < position - 1)
        {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
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
    insertionAtSpecificPosition();
    DisplayCLL();
    return 0;
}