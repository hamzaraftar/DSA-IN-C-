#include <iostream>
using namespace std;

int main()
{

    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *temp, *preNode;
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

    // -------------- delete from  end---------------

    temp = head;
    while (temp->next != 0)
    {
        preNode = temp;
        temp = temp->next;
    }
    preNode->next = 0;
    // "note" ==== preNode poniter is only for "delete from  end"
    delete (temp);

    // -----------------for prient of linklist --------------

    cout << "Linklist after deletion at End  :  " << endl;
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << "   " << endl;
        temp = temp->next;
    }
    return 0;
}
