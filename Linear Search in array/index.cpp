#include <iostream>
using namespace std;
int main()
{
    int arr[10], n, x, i;
    cout << "Enter size of array :" << endl;
    cin >> n;
    cout << "Enter elements of array " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to search in array" << endl;
    cin >> x;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "Element found at index " << i << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "Element are not found in array :" << endl;
    }
    return 0;
}