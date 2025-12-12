#include <iostream>
#include <vector>
#include "Solution.cpp"
using namespace std;

int main()
{
    int target, size, found;

    cout << "Enter number of elements : ";
    cin >> size;

    vector<int> nums(size);

    cout << endl
         << endl
         << "Enter array elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter array[" << i << "] : ";
        cin >> nums[i];
    }

    cout << "Enter element to find index : ";
    cin >> target;

    Solution sol;
    found = sol.searchInsert(nums, target);

    if (found)
        cout << "Target found at index : " << found;
    else
        cout << "Target not found but can be replaced at index : " << found;
}