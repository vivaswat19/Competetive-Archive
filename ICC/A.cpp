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
    ll n, x;
    cin >> n >> x;
    ll median1 = (n) / 2, median2 = median1 + 1;
    ll median = median1;

    if (x >= median2)
        median = median1;
    else
        median = median2;

    cout << median << "\n";
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
