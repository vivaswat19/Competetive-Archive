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
    vector<ll> arr2(n, -1);
    vector<ll> temp;
    vector<bool> vis(n, false);

    if (arr1[0] == 0)
    {
        arr2[0] = 1;
        vis[0] = true;
        vis[1] = true;
        temp.pb(0);
    }
    else if (arr1[0] == 1)
    {
        arr2[0] = 0;
        vis[1] = true;
        vis[0] = true;
        temp.pb(1);
    }
    else
    {
        cout << "-1\n";
        return;
    }
    ll size = 0;
    fo2(i, 1, n)
    {
        if (arr1[i] >= 0)
        {
            if (arr1[i] < i)
            {
                cout << "-1\n";
                return;
            }
            arr2[i] = temp[size++];
            temp.pb(arr1[i]);
            vis[arr1[i]] = true;
        }
    }
    ll index = 0;
    fo1(i, n)
    {
        while (index < n && vis[index])
            index++;
        if (arr2[i] == -1)
        {
            arr2[i] = index;
            vis[index] = true;
        }
    }

    fo1(i, n)
    {
        cout << arr2[i] << " ";
    }
    cout << "\n";
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