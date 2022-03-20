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
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++)
        {
            ans[i] = i + 1;
        }
        if (k <= 0 || k > n)
        {
            cout << "-1\n";
            continue;
        }
        else if (k != n)
        {
            if (n % 2 == 0)
            {
                int count = (n - k) / 2;
                int index = n - 1;
                while (count--)
                {
                    int temp = ans[index];
                    ans[index] = ans[index - 1];
                    ans[index - 1] = temp;
                    index -= 2;
                }

                if (k % 2 != 0)
                {
                    int val = ans[index];
                    int temp = ans[index];
                    ans[index] = (val / 2);
                    ans[(val / 2) - 1] = temp;
                }
            }
            else
            {
                int count = (n - k) / 2;
                int index = n - 1;
                while (count--)
                {
                    int temp = ans[index];
                    ans[index] = ans[index - 1];
                    ans[index - 1] = temp;
                    index -= 2;
                }

                if (k % 2 == 0)
                {
                    int val = ans[index - 1];
                    int temp = ans[index - 1];
                    ans[index - 1] = (val / 2);
                    ans[(val / 2) - 1] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}
// 0 is not possible for even or odd

// n = 7, k = 4
// 1 2 3 4 5 7 6
// 1 2 3 4 5 6 7

// n = 8, k = 6
// 1 2 3 4 5 6 7 8
// 1 2 3 4 5 6 7 8