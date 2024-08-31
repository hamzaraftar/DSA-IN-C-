#include <iostream>
using namespace std;

int main()
{
    int pos, i = 1;
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *temp;
    head = 0;
    int choise;
    while (choise)
    {

        node *newnode = new node;
        cout << "Enter data :" << endl;
        cin >> newnode->data;
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        cout << "Do you want to continue (1,0) ?" << endl;
        cin >> choise;
    }
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << "   " << endl;
        temp = temp->next;
    }

    // -----------------at specific postion-----------------------------

    node *newnode = new node;
    cout << "Enter the positon number :" << endl;
    cin >> pos;
    temp = head;
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }
    cout << "Enter data you want to insert :" << endl;
    cin >> newnode->data;
    newnode->next = temp->next;
    temp->next = newnode;
    // =================To Display Linklist=================================
    cout << "The   elements of Linkedlist  are :" << endl;
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << "   ";
        temp = temp->next;
    }

    return 0;
}
