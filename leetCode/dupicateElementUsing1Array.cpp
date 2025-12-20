#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];
    cout << endl
         << endl
         << "Enter sorted array elements" << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    int j = 1;

    // logic to remove duplicate elements
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            a[j] = a[i];
            j++;
        }
    }

    cout << "Array after removing duplicates : ";

    for (int i = 0; i < j; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
