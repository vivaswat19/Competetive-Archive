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
    ll n, m;
    cin >> n >> m;
    vector<vector<ll> > arr(n, vector<ll>(m, 0));
    ll row = 0, col = 0;
    fo1(i, n)
    {
        ll xorval = 0;
        fo1(j, m)
        {
            cin >> arr[i][j];
            xorval = xorval ^ arr[i][j];
        }

        if (xorval == 0)
        {
            row++;
        }
    }

    fo1(i, m)
    {
        ll xorval = 0;
        fo1(j, n)
        {
            xorval = xorval ^ arr[j][i];
        }
        if (xorval == 0)
        {
            col++;
        }
    }

    cout << max(row, col) << "\n";
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
}
