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
#include <cmath>

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
    ll n;
    cin >> n;
    vector<ll> arr1(n, 0);
    fo1(i, n)
    {
        cin >> arr1[i];
    }
    sort(arr1.begin(), arr1.end());

    ll count = n;
    ll ans = 0;

    while (count > 0)
    {
        ll c = 0;
        for (ll i = 0; i < n; i++)
        {
            if (arr1[i])
            {
                arr1[i] /= 2;

                if (arr1[i] == 0)
                    c++;
            }
        }

        ans += (c * (c - 1)) / 2;
        count -= c;
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