#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <limits.h>
#include <queue>
#include <math.h>
#include <stack>

using namespace std;

#define ll long long
#define fo1(i, n) for (int i = 0; i < n; i++)
#define fo2(i, a, b) for (int i = a; i < b; i++)
#define for1(i, n) for (int i = n; i >= 0; i--)
#define for2(i, a, b) for (int i = a; i >= b; i--)
#define pb push_back
#define vec vector
#define uns unordered_set
#define fi first
#define sec second

void solve()
{
    int n;
    cin >> n;
    string s1;
    cin >> s1;

    ll ans = 0, length = s1.size();
    ll stackSize = 0;
    string forward = "", reverse = "";
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '(')
        {
            if (i + 1 < n)
            {
                ans++;
                length -= 2;
                i++;
            }
            else
            {
                break;
            }
        }
        else
        {
            if (i + 1 < n && s1[i + 1] == ')')
            {
                ans++;
                length -= 2;
                i++;
            }
            else
            {
                string f = "", rev = "";
                int index = i;
                for (; index < n; index++)
                {
                    f += s1[index];
                    rev = s1[index] + rev;

                    if (f == rev)
                    {
                        i = index;
                        ans++;
                        length -= f.size();
                        break;
                    }
                }
            }
        }
    }

    cout << ans << " " << length << "\n";
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