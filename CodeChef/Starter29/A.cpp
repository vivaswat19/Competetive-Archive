#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str1;
        cin >> str1;

        int index = 0;
        int ans = 0;
        while (index < str1.length())
        {
            if (index + 1 < str1.length() && str1[index] == str1[index + 1])
            {
                ans++;
                index = index + 2;
            }
            else
            {
                ans++;
                index++;
            }
        }
        cout << ans << "\n";
    }
}