#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head;
/*
void CreateDll()
{
    int choise;
    head = 0;
    struct node *temp;
    while (choise)
    {
        node *newNode = new node;
        cout << "Enter data :" << endl;
        cin >> newNode->data;
        newNode->next = 0;
        if (head == 0)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        temp->next = head;
        cout << "Do you want to continue press (1,0) : " << endl;
        cin >> choise;
    }
}
*/

//----------------------------- Maintain tail pointer ----------------------------

void CreateDll()
{
    int choise;
    head = 0;
    struct node *tail;
    while (choise)
    {
        node *newNode = new node;
        cout << "Enter data :" << endl;
        cin >> newNode->data;
        newNode->next = 0;
        if (head == 0)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        tail->next = head;
        cout << "Do you want to continue press (1,0) : " << endl;
        cin >> choise;
    }
}

void Display()
{
    struct node *temp;
    temp = head;
    cout << "The nodes in Linklist are :" << endl;
    while (temp->next != head)
    {
        cout << temp->data << "   " << endl;
        temp = temp->next;
    }
    cout << temp->data << "  " << endl;
}

int main()
{
    CreateDll();
    Display();
    return 0;
}