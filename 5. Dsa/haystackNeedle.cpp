#include <iostream>
using namespace std;

int main()
{
    string haystack, needle;
    int found;

    cout << "Enter string : ";
    cin >> haystack;

    cout << "Enter substring to find in string : ";
    cin >> needle;

    for (int i = 0; haystack[i] != '\0'; i++)
    {
        int j = 0;
        while (needle[j] != '\0' && haystack[i + j] == needle[j])
        {
            j++;
        }

        // if the entire needle matched
        if (needle[j] == '\0')
        {
            found = i;
            break;
        }
        else
            found = -1;
    }

    cout << found;
}