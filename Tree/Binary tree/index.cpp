#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
//Creation of Binary tree
struct node *Create()
{
    int x;
    node *newNode = new node;
    cout << "Enter data  : or (press -1 for no node) " << endl;
    cin >> x;
    if (x == -1)
    {
        return 0;
    }
    newNode->data = x;
    cout << "Enter left child of " << x << endl;
    newNode->left = Create();
    cout << "Enter right child of " << x << endl;
    newNode->right = Create();
    return newNode;
}

int main()
{
    struct node *root;
    root = 0;
    root = Create();
    return 0;
}