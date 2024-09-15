#include <iostream>
using namespace std;
int main()
{
    int arr[50], size;
    cout << "Enter size of array " << endl;
    cin >> size;
    cout << "Enter elements of array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements of array is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}