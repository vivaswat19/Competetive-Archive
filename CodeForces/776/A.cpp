#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char c;
        cin >> c;
        bool flag = true;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c)
            {
                if (i % 2 == 0 && (s.length() - i - 1) % 2 == 0)
                {
                    flag = false;
                    break;
                }
            }
        }

        if (!flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}