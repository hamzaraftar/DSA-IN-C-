#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *pre;
};
struct node *head, *tail;

void CreateDLL()
{
    int choise;
    while (choise)
    {
        node *newNode = new node;
        cout << "Enter data " << endl;
        cin >> newNode->data;
        newNode->pre = 0;
        newNode->next = 0;
        if (head == 0)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->pre = tail;
            tail = newNode;
        }
        cout << "Do you want to continue (1,0) ? " << endl;
        cin >> choise;
    }
}

void deleteFromEnd()
{
    cout << "Delete From End" << endl;
    struct node *temp;
    temp = tail;
    tail->pre->next = 0;
    tail = tail->pre;
    delete (temp);
}

void Display()
{
    cout << "The Elements of Linklsit are : " << endl;
    struct node *temp;
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << "   " << endl;
        temp = temp->next;
    }
}

int main()
{
    CreateDLL();
    Display();
    deleteFromEnd();
    Display();
    return 0;
}