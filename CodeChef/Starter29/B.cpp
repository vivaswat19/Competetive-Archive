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
        int n;
        cin >> n;
        vector<long long> arr(n, 0);
        long long ans = 0;
        long long minV = INT_MAX;
        long long maxV = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] = abs(arr[i]);

            if (i % 2 == 0)
            {
                ans += arr[i];
                minV = min(minV, arr[i]);
            }
            else
            {
                ans -= arr[i];
                maxV = max(maxV, arr[i]);
            }
        }

        if (minV < maxV)
        {
            ans -= 2 * minV;
            ans += 2 * maxV;
        }

        cout << ans << "\n";
    }
}