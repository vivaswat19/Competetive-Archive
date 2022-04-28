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

void solve(int val)
{
    ll c1, c2, c3, m1, m2, m3, y1, y2, y3, k1, k2, k3;
    cin >> c1 >> m1 >> y1 >> k1 >> c2 >> m2 >> y2 >> k2 >> c3 >> m3 >> y3 >> k3;
    cout << "Case #" << val << ": ";
    ll c4 = min(c1, min(c2, c3));
    ll m4 = min(m1, min(m2, m3));
    ll y4 = min(y1, min(y2, y3));
    ll k4 = min(k1, min(k2, k3));

    if (c4 + m4 + y4 + k4 >= 1000000)
    {
        ll diff = (c4 + m4 + y4 + k4) - 1000000;

        if (c4 >= diff)
        {
            c4 -= diff;
            diff = 0;
        }
        else
        {
            diff -= c4;
            c4 = 0;

            if (m4 >= diff)
            {
                m4 -= diff;
                diff = 0;
            }
            else
            {
                diff -= m4;
                m4 = 0;

                if (y4 >= diff)
                {
                    y4 -= diff;
                    diff = 0;
                }
                else
                {
                    diff -= y4;
                    y4 = 0;

                    if (k4 >= diff)
                    {
                        k4 -= diff;
                        diff = 0;
                    }
                    else
                    {
                        cout << "IMPOSSIBLE\n";
                        return;
                    }
                }
            }
        }

        cout << c4 << " " << m4 << " " << y4 << " " << k4 << "\n";
    }
    else
    {
        cout << "IMPOSSIBLE\n";
    }
}

int main()
{
    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        solve(i);
        i++;
    }
}