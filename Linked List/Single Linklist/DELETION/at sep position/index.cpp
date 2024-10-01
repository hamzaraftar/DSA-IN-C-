#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head, *temp, *nextnode;

int main()
{
    int pos, i = 1;
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

    //-------------- deletion  from  specified postion---------------
    temp = head;
    cout << "Enter position number:" << endl;
    cin >> pos;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    delete (nextnode);
    cout << "Linklist after deletion at  specified postion :  " << endl;
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << "   " << endl;
        temp = temp->next;
    }

    return 0;
}
