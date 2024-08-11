#include <iostream>
using namespace std;
int main()
{
    int arr[10], n, x, i;
    cout << "Enter the size  of Array: " << endl;
    cin >> n;
    cout << "Enter the elements: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element at end :" << endl;
    cin >> x;
    arr[i] = x;
    n++;
    cout << "Updated array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}