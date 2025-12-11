#include <iostream>
#include <vector>
#include "Solution.cpp"
using namespace std;

int main()
{
    int size;
    cout << "Enter number of elements : ";
    cin >> size;

    vector<int> nums(size);

    cout << endl
         << endl
         << "Enter vector elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter array[" << i << "] : ";
        cin >> nums[i];
    }

    // cout << endl
    //      << endl
    //      << "Vector elements : ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << nums[i] << " ";
    // }

    Solution s1;

    bool duplicateOrNot = s1.containsDuplicate(nums);

    if (!duplicateOrNot)
        cout << "Duplicate not found...";
    else
        cout << "Duplicate found...";
}