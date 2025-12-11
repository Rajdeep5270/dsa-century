#include <iostream>
#include "Sum.cpp"
using namespace std;

int main()
{
    int size;
    int n;

    cout << "Enter number of size : ";
    cin >> size;

    Sum s1(size);

    s1.setData();

    cout << "Enter number to get sum of : ";
    cin >> n;

    s1.sumOfIndices(n);
};