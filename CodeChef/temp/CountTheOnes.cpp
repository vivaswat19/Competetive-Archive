#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    map<string, long long> mp;
    vector<string> stAll;
    set<string> st;
    long long MAX = ;
    st.insert("1");
    stAll.push_back("1");
    mp["1"] = 1;

    while (st.size() < MAX)
    {
        long long size = stAll.size();
        cout << size << " ";
        for (long long j = 0; j < size; j++)
        {
            string t = stAll[j];
            long long count = mp[t];
            st.insert(t + "0");
            st.insert(t + "1");

            stAll.push_back(t + "0");
            stAll.push_back(t + "1");

            mp[t + "0"] = count;
            mp[t + "1"] = count + 1;
        }
    }

    long long c = 0;
    long long ans = 0;

    auto it = st.begin();
    while (it != st.begin())
    {
        ans += mp[*it];
        it++;
        c++;
        if (c == k)
            break;
    }

    cout << ans << "\n";
}