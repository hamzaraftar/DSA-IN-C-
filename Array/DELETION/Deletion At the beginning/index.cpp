#include <iostream>
using namespace std;
int main()
{
    int arr[10], n;
    cout << "Enter Size of Array :" << endl;
    cin >> n;
    cout << "Enter Array elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "Array after deletion" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}