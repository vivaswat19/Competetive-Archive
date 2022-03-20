#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkC(int n, string str)
{
    if (str[0] == '0' || str[str.length() - 1] == '0')
        return true;
    if (str.length() >= 3 && str[1] == '0')
        return true;

    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        if (checkC(n, str))
        {
            cout << "No\n";
            continue;
        }
        else
        {
            cout << "Yes\n";
            vector<int> ans(n, 0);
            for (int i = 0; i < n; i++)
            {
                ans[i] = i;
            }
            for (int i = 1; i < n; i++)
            {
                if (str[i] == '0')
                {
                    int temp = ans[i];
                    ans[i] = ans[i - 1];
                    ans[i - 1] = temp;
                }
            }

            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << "\n";
        }
    }
}
// starting and ending with 0 not possible
// 1 should always be 1

// 0 1 2 3 4 5 6 7
// 1 0 1 0 1 0 0 0
// 1 0 2 3 4 5 6

// 4
// n+1 length string: 11111
// [0 ... n-1] permutation, segment mex

// [0 1 2 3]

// [0]