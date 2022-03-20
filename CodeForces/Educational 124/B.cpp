#include <iostream>
#include <vector>
#include <map>
#include <limits.h>
#include <unordered_set>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n >= 30)
        {
            cout << "NO\n";
            continue;
        }
        long long val = 0;
        vector<long long> ans(n, 1);
        for (int i = 0; i < n; i++)
        {
            ans[i] = (val * 3) + 1;
            val = ans[i];

            if (val > 1000000000)
                break;
        }
        if (val > 1000000000)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
        }

        cout << "\n";
    }
}

// 1 3 9 27
// 2 2 9 27
// 8 3 8 27
// 1 6 6 27
// 1 3 18 18

// x y z w
// sum = x + y + z + w

// x w-y z w - y

// sum = x + z + 2w - 2y
//
// 3 y <= z
