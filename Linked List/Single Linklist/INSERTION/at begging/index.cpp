#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head, *temp;
int main()
{
    int pos, i;

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

    // -- -- -- -- -- -- -inser at begging-- -- -- -- -- --

    node *newnode = new node;
    cout << "Enter data you want to insert at begging  :" << endl;
    cin >> newnode->data;
    newnode->next = head;
    head = newnode;

    // *****for prient of Linkedlist*****
    cout << "Linklist after insert at begging" << endl;

    temp = head;
    while (temp != 0)
    {
        cout << temp->data << "   ";
        temp = temp->next;
    }
}