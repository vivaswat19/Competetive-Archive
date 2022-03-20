#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        bool flag = true;
        vector<int> arr(n, 0), a(n, 0);
        vector<int> greatest(n + 1, -1);
        vector<int> smallest(n + 1, -1);

        vector < vec for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n >= 3)
        {
            int maxSoFar = -1, maxSoFarIndex = -1;
            int minSoFar = INT_MAX, minSOFarIndex = -1;
            for (int i = n - 1; i >= 0; i--)
            {
                greatest[i] = maxSoFarIndex;
                smallest[i] = minSOFarIndex;
                if (arr[i] > maxSoFar)
                {
                    maxSoFar = arr[i];
                    maxSoFarIndex = i;
                }

                if (arr[i] <= minSoFar)
                {
                    minSoFar = arr[i];
                    minSOFarIndex = i;
                }
            }
            bool flag = true;
            int maxVal = INT_MIN;
            for (int i = 0; i < n - 2; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    int difference = arr[greatest[i]] - arr[smallest[i]];
                    if (greatest[i] > smallest[i])
                    {
                        if (difference > maxVal)
                        {
                            a[i] = difference;
                        }
                        else
                        {
                            flag = false;
                            break;
                        }
                    }
                }
            }
            if (!flag)
            {
                cout << "-1\n";
                continue;
            }
        }
    }
}

// 1 3 2 4 3 5 5 6 6
// 1 3 3 4 3 5 5 6 6