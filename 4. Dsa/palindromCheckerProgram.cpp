#include <iostream>
#include "Solution.cpp"
using namespace std;

int main()
{
    int num;
    cout << "Enter any number : ";
    cin >> num;

    Solution sol;

    bool finalAns = sol.isPalindrom(num);

    if (finalAns)
        cout << num << " is palindrom number";
    else
        cout << num << " is not palindrom number";
}