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
    ll n;
    cin >> n;
    string s1;
    cin >> s1;
    ll count0 = 0, count1 = 0;
    fo1(i, n)
    {
        if (s1[i] == '1')
            count1++;
        else
            count0++;
    }

    ll minV = min(count0, count1);
    ll maxV = max(count0, count1);
    ll ans = minV;
    if (maxV == minV)
    {
        ans += maxV;
    }
    else if (maxV > minV)
    {
        ans += minV + 1;
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