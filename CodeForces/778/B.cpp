#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <limits.h>
#include <queue>

using namespace std;

#define ll long long
#define fo1(i, n) for (int i = 0; i < n; i++)
#define fo2(i, a, b) for (int i = a; i < b; i++)
#define for1(i, n) for (int i = n; i >= 0; i--)
#define for2(i, a, b) for (int i = a; i >= b; i--)

void solve()
{
    string st;
    cin >> st;
    map<char, int> m;
    fo1(i, st.length())
    {
        m[st[i]]++;
    }
    int index = 0;
    fo1(i, st.length())
    {
        if (m[st[i]] > 1)
        {
            index++;
            m[st[i]]--;
        }
        else
        {
            break;
        }
    }
    string ans = "";
    fo2(i, index, st.length())
    {
        ans += st[i];
    }
    cout << ans << "\n";
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}