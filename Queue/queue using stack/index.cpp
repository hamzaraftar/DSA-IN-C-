#include <iostream>
using namespace std;

int stack1[5], stack2[5];
int top1 = -1;
int top2 = -1;
int total = 0;
void push1(int data)
{
    if (top1 == 5 - 1)
    {
        cout << "Over flowcondition" << endl;
    }
    else
    {
        top1++;
        stack1[top1] = data;
    }
}
void push2(int data)
{
    if (top2 == 5 - 1)
    {
        cout << "Over flowcondition" << endl;
    }
    else
    {
        top2++;
        stack2[top2] = data;
    }
}
void enqueue(int x)
{
    push1(x);
    total++;
}
int pop1()
{
    return stack1[top1--];
}
int pop2()
{
    return stack2[top2--];
}

void dequeue()
{
    int a, b;
    if (top1 == -1 && top2 == -1)
    {
        cout << "Queue is empty " << endl;
    }
    else
    {
        for (int i = 0; i < total; i++)
        {
            a = pop1();
            push2(a);
        }
        b = pop2();
        cout << "The pop element are " << b << endl;
        total--;
        for (int i = 0; i < total; i++)
        {
            a = pop2();
            push1(a);
        }
    }
}
void Display()
{
    for (int i = 0; i <= top1; i++)
    {
        cout << stack1[i] << endl;
    }
}
int main()
{
    enqueue(5);
    enqueue(2);
    enqueue(3);
    enqueue(9);
    Display();
}