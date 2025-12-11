#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    int *arr;

    arr = new int[size];

    // input of array elements
    cout << endl
         << "Input array elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter array[" << i << "] : ";
        cin >> arr[i];
    }

    // logic to find min and max from an given array
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
            min = arr[i];

        if (max < arr[i])
            max = arr[i];
    }
    cout << endl
         << "Minimum Value : " << min << endl
         << "Maximum Value : " << max << endl;

    // output of array elements
    cout << endl
         << "Array elements : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
}