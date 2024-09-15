#include <iostream>
using namespace std;
int main()
{
    int arr[10], n, pos, x;
    cout << "Enter Size of Array  : ";
    cin >> n;
    cout << "Enter array elemants : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter position to insert element : ";
    cin >> pos;
    cout << "Enter the value to insert ";
    cin >> x;
    for (int i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = x;
    n++; // increment size of array by 1
    cout << "Updated array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}