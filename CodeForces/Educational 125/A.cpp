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
    int x, y;
    cin >> x >> y;
    ll val = pow(x, 2) + pow(y, 2);
    ll sq = sqrt(val);
    if (x == 0 && y == 0)
    {
        cout << "0\n";
        return;
    }
    if (val == sq * sq)
    {
        cout << "1\n";
        return;
    }
    else
    {
        cout << "2\n";
        return;
    }
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