#include <iostream>
using namespace std;

class Sum
{
private:
    int size;
    int *arr;

public:
    Sum(int size)
    {
        this->size = size;
        arr = new int[size];
    }

    // setter
    void setData()
    {
        cout << endl
             << endl
             << "Input Array Elements" << endl
             << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "Enter array[" << i << "] : ";
            cin >> arr[i];
        }
    }

    // getter
    void getData()
    {
        cout << endl
             << endl
             << "Array elements are : ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    // sum of indices
    void sumOfIndices(int numberToFind)
    {
        cout << endl
             << endl
             << "The indices of " << numberToFind << endl;
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                int sum = arr[i] + arr[j];
                if (sum == numberToFind)
                    cout << arr[i] << "," << arr[j];
            }
            cout << endl;
        }
    }

    ~Sum()
    {
        delete[] arr;
    }
};