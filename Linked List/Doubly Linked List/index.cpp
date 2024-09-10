#include <iostream>
using namespace std;
// In double Linklist traversal is possible in both direction ;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;

void Create()
{
    int choise;
    head = 0;
    while (choise)
    {
        struct node *temp;
        node *newNode = new node;
        cout << "Enter Data in Node" << endl;
        cin >> newNode->data;
        newNode->next = 0;
        newNode->prev = 0;
        if (head == 0)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
        cout << "Do you want to continue (1,0) ?" << endl;
        cin >> choise;
    }
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
    Create();
    Display();
}