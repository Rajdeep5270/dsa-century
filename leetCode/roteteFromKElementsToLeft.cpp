#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    int a[size];
    cout << endl
         << endl
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
        int temp = a[0];
        for (int j = 0; j < size - 1; j++)
        {
            a[j] = a[j + 1];
        }
        a[size - 1] = temp;
    }

    cout << endl
         << endl
         << "Rotated elements are : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}