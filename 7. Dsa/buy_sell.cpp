#include <iostream>
#include <vector>
#include "Solution.cpp"
using namespace std;

int main()
{
    int size = 6; // in a week there are 6 working days that's why static value

    vector<int> prices(size);
    cout << endl
         << endl
         << "Enter Prices of Different Days" << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Day[" << i + 1 << "] : ";
        cin >> prices[i];
    }

    Solution sol;
    cout << "The profit is : " << sol.maxProfit(prices);
}