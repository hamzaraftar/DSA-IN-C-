#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
// Creation of Binary tree
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

void Preorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    else
    {
        cout << root->data << endl;
        Preorder(root->left);
        Preorder(root->right);
    }
}
void inorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    else
    {
        inorder(root->left);
        cout << root->data << endl;
        inorder(root->right);
    }
}

int main()
{
    struct node *root;
    root = 0;
    root = Create();
    Preorder(root);
    inorder(root);
    cout << "preorder :" << endl;
    return 0;
}