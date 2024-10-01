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

    // -------------inser at End------------

    node *newnode = new node;
    cout << "Enter data you want to insert at End of Linkedlist:" << endl;
    cin >> newnode->data;
    newnode->next = 0;
    temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;

    // *****for prient of Linkedlist*****

    cout << "The   elements of Linkedlist  are :" << endl;
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << "   ";
        temp = temp->next;
    }

    return 0;
}
