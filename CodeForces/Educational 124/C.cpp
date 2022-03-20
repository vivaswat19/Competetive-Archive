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
        vector<int> arr1(n, 0);
        vector<int> arr2(n, 0);

        for (int i = 0; i < n; i++)
            cin >> arr1[i];

        for (int i = 0; i < n; i++)
            cin >> arr2[i];

        int i1 = -1, i2 = -1, i3 = -1, i4 = -1;
        long long d1 = INT_MAX, d2 = INT_MAX, d3 = INT_MAX, d4 = INT_MAX;
        long long ans = 0;
        bool n1 = true, n2 = true, n3 = true, n4 = true;
        for (int i = 0; i < n; i++)
        {
            if (d1 > abs(arr2[i] - arr1[0]))
            {
                d1 = abs(arr2[i] - arr1[0]);
                i1 = i;
            }
        }
        if (i1 == 0)
            n3 = false;
        else if (i1 == n - 1)
            n4 = false;

        for (int i = n - 1; i >= 0; i--)
        {
            if (d2 > abs(arr2[i] - arr1[n - 1]))
            {
                d2 = abs(arr2[i] - arr1[n - 1]);
                i2 = i;
            }
        }
        if (i2 == 0)
            n3 = false;
        else if (i2 == n - 1)
            n4 = false;

        if (n3)
        {
            for (int i = 0; i < n; i++)
            {
                if (d3 > abs(arr1[i] - arr2[0]))
                {
                    d3 = abs(arr1[i] - arr2[0]);
                    i3 = i;
                }
            }

            if (i3 == 0)
                n1 = false;
            else if (i3 == n - 1)
                n2 = false;
        }

        if (n4)
        {
            if (d4 > abs(arr1[i] - arr2[n - 1]))
            {
                d4 = abs(arr1[i] - arr2[n - 1]);
                i4 = i;
            }

            if (i4 == 0)
                n1 = false;
            else if (i4 == n - 1)
                n2 == false;
        }

        if (!n1 || !n2 || !n3 || !n4)
        {
            if (!n1)
            {
                if (!n3)
                {
                }
                else if ()
            }
            else if (!n2)
            {
            }
            else if (!n3)
            {
            }
            else
            {
            }
        }
        else
        {
            cout << d1 + d2 + d3 + d4 << "\n";
        }
    }
}
