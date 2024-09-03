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

    // -- -- -- -- -- -- --delete from begging-- -- -- -- -- -- -- -temp = head;
    head = head->next;
    delete (temp);
    cout << "Linklist after deletion at beginning" << endl;

    // -----------------for prient of linklist --------------
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << "   " << endl;
        temp = temp->next;
    }

    return 0;
}
