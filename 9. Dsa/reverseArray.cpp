#include <iostream>
using namespace std;

int main()
{
    int a[] = {10, 20, 30, 40, 50};

    int left = 0;
    int right = 4;

    while (left < right)
    {
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;

        a[left++];
        a[right--];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
}