#include <iostream>
using namespace std;

int main()
{
    string str;
    int frq = 1;

    cout << "Enter any string : ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++)
    {
        frq = 1;
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                frq++;
                str[j] = '0';
            }
        }
        if (str[i] != '0')
        {
            cout << str[i] << " = " << frq << endl;
        }
    }
}