#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n], b[n];

    cout << endl
         << "Enter sorted array elements" << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    int j = 0;
    b[j++] = a[0];

    // logic to remove duplicates
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            b[j] = a[i];
            j++;
        }
    }

    cout << "Array after removing duplicates : ";
    for (int i = 0; i < j; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}
