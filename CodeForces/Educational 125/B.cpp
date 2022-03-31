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

void solve()
{
    ll n, b, x, y;
    cin >> n >> b >> x >> y;
    ll a = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a + x > b)
        {
            a = a - y;
        }
        else
        {
            a = a + x;
        }
        ans += a;
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