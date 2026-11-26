#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string s = "codeforces";

    while (t--)
    {
        char c;
        cin >> c;

        int i;
        for (i = 0; i < s.length(); i++)
        {
            if (c == s[i])
            {
                break;
            }
        }

        if (i < s.length())
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}