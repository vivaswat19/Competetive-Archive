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

        vector<int> arr3(n, 0);
        bool notPossible = false;
        for (int i = 0; i < n; i++)
        {
            arr3[i] = arr2[i] - arr1[i];
            if (arr3[i] < 0)
            {
                notPossible = true;
                break;
            }
        }
        if (notPossible)
        {
            cout << "-1\n";
            continue;
        }
        int ans = 0;
        int index1 = 0, index2 = n - 1;
        while (index1 < n - 1 && arr3[index1] >= arr3[index1 + 1])
            index1++;

        while (index2 > 0 && arr3[index2 - 1] <= arr3[index2])
            index2--;

        if (index2 <= index1)
        {
            ans = arr3[0] + arr3[n - 1];
        }
        else
        {
            int sum = arr3[index1] + arr3[index2];
            bool isDec = false;
            for (int i = index1 + 1; i < index2; i++)
            {
                if (arr3[i] > sum)
                {
                    notPossible = true;
                    break;
                }
                if (isDec && arr3[i] > arr3[i - 1])
                {
                    notPossible = true;
                    break;
                }

                if (!isDec && arr3[i] < arr3[i - 1])
                    isDec = true;
            }
            ans = arr3[0] + arr3[n - 1];
        }
        if (notPossible)
            cout << "-1\n";
        else
            cout << ans << "\n";
    }
}
