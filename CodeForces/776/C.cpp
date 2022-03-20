#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <unordered_set>
#include <map>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
        return a.first < b.first;
}

class compareVal
{
public:
    bool operator() (pair<int, int> const &a, pair<int, int> const &b)
    {
        return a.second > b.second;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int> > arr;
        map<int, int> mp;
        priority_queue<pair<int, int>, vector<pair<int, int> >, compareVal> pq;
        for (int i = 0; i < m; i++)
        {
            pair<int, int> t;
            cin >> t.first >> t.second;
            arr.push_back(t);
            pq.push(t);
            mp[t.first] = i + 1;
        }
        long long sum = 0;
        unordered_set<int> st;
        for (int i = 0; i < 2 * n; i++)
        {
            pair<int, int> t = pq.top();
            pq.pop();
            st.insert(t.first);
            sum += t.second;
        }

        sort(arr.begin(), arr.end(), compare);
        int start = 0, end = m - 1;
        vector<pair<int, int> > ans;
        while (start < end)
        {
            int f = arr[start].first, e = arr[end].first;

            if (st.find(f) != st.end() && st.find(e) != st.end())
            {
                pair<int, int> p;
                int first = min(mp[f], mp[e]);
                int second = max(mp[f], mp[e]);
                p.first = first;
                p.second = second;
                ans.push_back(p);
                start++;
                end--;
            }
            else if (st.find(f) != st.end())
                end--;
            else if (st.find(e) != st.end())
                start++;
            else
            {
                start++;
                end--;
            }
        }
        cout << sum << "\n";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i].first << " " << ans[i].second << "\n";
        }

        cout << "\n";
    }
}
