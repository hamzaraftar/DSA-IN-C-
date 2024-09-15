#include <iostream>
using namespace std;
int main()
{
    int arr[10], n, x;
    cout << "Enter the Size  of Array: ";
    cin >> n;
    cout << "Enter Array elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // insert at beginning
    cout << "Enter element at beginning :";
    cin >> x;
    // shift every element at right
    for (int i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
    n++;
    cout << "Array after inserting at beginning: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}