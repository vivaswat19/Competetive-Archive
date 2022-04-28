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
    ll n;
    cin >> n;
    vector<ll> arr(n, 0);
    fo1(i, n)
    {
        cin >> arr[i];
    }

    cout << "Case #" << val << ": ";
    sort(arr.begin(), arr.end());

    int maxLen = 0, v = 1;
    fo1(i, n)
    {
        if (arr[i] >= v)
        {
            v++;
            maxLen++;
        }
    }

    cout << maxLen << "\n";
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