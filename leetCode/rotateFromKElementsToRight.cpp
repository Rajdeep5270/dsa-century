#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    int a[size];
    cout << endl
         << "Enter array elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    int k;
    cout << "Enter k : ";
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        int temp = a[size - 1];
        for (int j = size - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }
        a[0] = temp;
    }

    cout << endl
         << "Rotated elements are : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
