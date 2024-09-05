#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head, *temp;

void reverse()
{

    struct node *prenode, *currentnode, *nextnode;
    prenode = 0;
    currentnode = nextnode = head;
    while (nextnode != 0)
    {
        nextnode = nextnode->next;
        currentnode->next = prenode;
        prenode = currentnode;
        currentnode = nextnode;
    }
    head = prenode;
}


void prient()
{
    cout << "The Elements of Linklsit are : " << endl;
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << "   " << endl;
        temp = temp->next;
    }
}
void CreateNode()
{
    int choise;
    head = 0;
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
}

int main()
{
    CreateNode();
    prient();    
    reverse();
    prient();
    return 0;
}
