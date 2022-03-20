#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string str1, str2;
        cin >> str1 >> str2;

        vector<int> diff(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            int c1 = str1[i], c2 = str2[i];

            if (c2 < c1)
            {
                diff[i + 1] = (c2 - 'a' + 1) + ('z' - c1);
            }
            else
            {
                diff[i + 1] = c2 - c1;
            }
        }

        for (int i = 1; i < n + 1; i++)
        {
            diff[i] += diff[i - 1];
        }

        for (int i = 0; i < q; i++)
        {
            int l, r;
            cin >> l >> r;
        }
    }
}

// a1 a2 a3 a4 a5
// b1 b2 b3 b4 b5

// a1 + k1 = b1
// a2 + k1 + k2 = b2
// a3 + k1 + k2 + k3 = b3
// a4 + k1 + k2 + k3 + k4 = b4
// a5 + k1 + k2 + k3 + k4

// a2 + p1 = b2
// a3 + p1 + p2 = b3
// a4 + p1 + p2 + p3 = b4