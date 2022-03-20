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
    ll n;
    cin >> n;
    vector<ll> arr(n, 0);
    ll max1 = INT_MIN, max2 = INT_MIN;
    fo1(i, n)
    {
        cin >> arr[i];

        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
            max2 = arr[i];
    }

    cout << max1 + max2 << "\n";
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