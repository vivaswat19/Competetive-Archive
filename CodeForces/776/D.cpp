#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <unordered_set>
#include <map>
#include <stack>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        vector<int> mapping(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mapping[arr[i] - 1] = i;
        }
        stack<int> ans;

        for (int i = n - 1; i >= 0; i--)
        {
            int val = i;
            int index = mapping[val];

            if (index == val)
            {
                ans.push(0);
                continue;
            }
            int diff = val - index;
            for (int j = 0; j <= i; j++)
            {
                mapping[j] = (mapping[j] + diff) % (val + 1);
            }

            ans.push(index + 1);
        }

        while (!ans.empty())
        {
            cout << ans.top() << " ";
            ans.pop();
        }
        cout << "\n";
    }
}
