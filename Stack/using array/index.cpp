#include <iostream>
using namespace std;
int stack[5];
int top = -1;

void Push()
{
    int x;
    cout << "Enter data :" << endl;
    cin >> x;
    if (top == 4)
    {
        cout << "Overflow condition " << endl;
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
void Pop()
{
    int item;
    if (top == -1)
    {
        cout << "Underfloe condition " << endl;
    }
    else
    {
        item = stack[top];
        top--;
        cout << "the delete item are " << item << endl;
    }
}

// top operation

void Peek()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Top most element are " << stack[top] << endl;
    }
}

void Display()
{
    cout << "The elements in stack " << endl;
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
}

int main()
{
    int choise;
    do
    {
        cout << "Enter choise 1:push , 2:pop , 3:peek , 4:display" << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Peek();
            break;
        case 4:
            Display();
            break;
        default:
            cout << "Invalid position :" << endl;
            break;
        }
    } while (choise != 0);
    return 0;
}