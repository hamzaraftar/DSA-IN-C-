#include <iostream>
using namespace std;
int arr[10], size, x;
int BinarySearch(int low, int high)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] = x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{

    cout << "Enter Size of array :" << endl;
    cin >> size;
    cout << "Enter Elements of array in Ascending order :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter a number to search in array :" << endl;
    cin >> x;
    int result = BinarySearch(0, size - 1);
    if (result == -1)
    {
        cout << "Element are not find in array :" << endl;
    }
    else
    {
        cout << "Element are found at index : " << result << endl;
    }

    return 0;
}