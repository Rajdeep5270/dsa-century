#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrom(int x)
    {
        long int pal = x, rem = 0, rev = 0;
        if (x < 0)
            return false;
        while (x != 0)
        {
            rem = x % 10;
            rev = rev * 10 + rem;
            x = x / 10;
        }
        x = rev;
        if (pal == x)
            return true;
        else
            return false;
    };
};