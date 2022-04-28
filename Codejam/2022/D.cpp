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

struct CompareElem
{
    bool operator()(pair<ll, ll> const &p1, pair<ll, ll> const &p2)
    {
        return p1.second > p2.second;
    }
};

void solve(int val)
{
    ll n;
    cin >> n;
    vector<ll> F(n, 0);
    vector<ll> P(n, -1);
    vector<ll> Pc(n, 0);
    fo1(i, n)
    {
        cin >> F[i];
    }
    fo1(i, n)
    {
        cin >> P[i];
        P[i]--;
        if (P[i] != -1)
            Pc[P[i]]++;
    }
    cout << "Case #" << val << ": ";
    priority_queue<pair<ll, ll>, vector<pair<ll, ll> >, CompareElem> pq;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (Pc[i] == 0)
        {
            pair<ll, ll> temp;
            temp.first = i;
            temp.second = F[i];
            pq.push(temp);
            visited[i] = true;
        }
    }
    ll ans = 0;
    while (pq.size() > 0)
    {
        pair<ll, ll> curr = pq.top();
        pq.pop();
        ll index = curr.first;
        ll val = curr.second;

        ll nextindex = P[index];
        if (nextindex == -1 || visited[nextindex])
        {
            ans += val;
            continue;
        }

        ll nextVal = F[nextindex];

        curr.first = nextindex;
        if (nextVal > val)
        {
            curr.second = nextVal;
        }
        visited[nextindex] = true;
        pq.push(curr);
    }
    cout << ans << "\n";
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