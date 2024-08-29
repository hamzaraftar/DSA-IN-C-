#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
struct Node *head = NULL, *temp;
void insert(int n)
{
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = head;
    head = newNode;
}
void prient()
{
    cout << "Data Elements in Single Linked List are: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    prient();
    return 0;
}