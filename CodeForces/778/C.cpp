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
#define fo1(i, n) for (long long i = 0; i < n; i++)
#define fo2(i, a, b) for (long long i = a; i < b; i++)
#define for1(i, n) for (long long i = n; i >= 0; i--)
#define for2(i, a, b) for (long long i = a; i >= b; i--)

void solve()
{
    ll n;
    cin >> n;
    ll totalSum = 0;
    queue<ll> q;
    map<ll, ll> m;
    fo1(i, n)
    {
        ll a;
        cin >> a;
        m[a]++;
        totalSum += a;
    }

    return;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
