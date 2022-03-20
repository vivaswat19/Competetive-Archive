#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <queue>
#include <math.h>
using namespace std;
#define ll long long

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

        bool isDiff = false;
        bool notPossible = false;
        int index = -1, index2 = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] == arr2[i])
            {
                isDiff = true;
                if (index == -1)
                    index = i;
                else
                    index2 = i;
            }
            else if (arr2[i] < arr1[i])
            {
                notPossible = true;
            }
        }

        if (notPossible)
        {
            cout << "-1\n";
            continue;
        }

        int ans = 0;
        if (isDiff)
        {
            cout << "t1\n";
            int add = 0;
            while (index >= 0)
            {
                if (arr1[index] + add > arr2[index])
                {
                    notPossible = true;
                    break;
                }
                else if (arr1[index] + add < arr2[index])
                {
                    add = arr2[index] - arr1[index];
                    ans++;
                }
                index--;
            }
        }
        else
        {
            cout << "t2\n";
            int part = -1, minD = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                int diff = abs(arr2[i] - arr1[i]);
                if (minD >= diff)
                {
                    minD = diff;
                    part = i;
                }
            }

            int add = minD;

            for (int i = part - 1; i >= 0; i--)
            {
                if (arr1[i] + add < arr2[i])
                {
                    add = arr2[i] - arr1[i];
                    ans++;
                }
            }

            for (int i = part; i < n; i++)
            {
                if (arr1[i] + add > arr2[i])
                {
                    notPossible = true;
                    break;
                }
                else if (arr1[i] + add < arr2[i])
                {
                    add = arr2[i] - arr1[i];
                    ans++;
                }
            }
        }

        if (notPossible)
            cout << "-1\n";
        else
            cout << ans << "\n";
    }
}
