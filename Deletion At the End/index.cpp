#include <iostream>
using namespace std;
int main()
{
    int arr[10], n;
    cout << "Enter size of array " << endl;
    cin >> n;
    cout << "Enter elements of array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    n--;
    cout << "Array after deletion at end" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}