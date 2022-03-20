#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> perm(k, 0);
        for (int i = 0; i < k; i++)
        {
            cin >> perm[i];
        }
        sort(perm.begin(), perm.end());
        vector<int> ans(n, -1);
        int val = 1;
        for (int i = 0; i < perm.size(); i++)
        {
            int index = perm[i] - 1;
            while (index >= 0 && ans[index] == -1)
            {
                ans[index--] = val++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}