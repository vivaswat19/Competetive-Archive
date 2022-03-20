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
        long long n, k;
        cin >> n >> k;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int ans = 0;
        long long cost = 0, index = 0;
        bool coupon = true;
        while (index < n && cost < k)
        {
            if (cost + arr[index] > k)
            {
                if (coupon)
                {
                    cost += arr[index] / 2 + (arr[index] % 2 == 1 ? 1 : 0);
                    coupon = false;
                    if (cost > k)
                        break;
                }
                else
                {
                    break;
                }
            }
            else
            {
                cost += arr[index];
            }

            ans++;
            index++;
        }

        cout << ans << "\n";
    }
}
