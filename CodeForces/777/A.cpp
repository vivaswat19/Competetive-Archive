#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <map>
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
        if (n == 1)
        {
            cout << "1\n";
        }
        else if (n == 2)
        {
            cout << "2\n";
        }
        else
        {
            string ans1 = "1", ans2 = "2";
            long long sum1 = 1, sum2 = 2;

            while (sum1 < n)
            {
                if (ans1[ans1.length() - 1] == '1')
                {
                    ans1 += "2";
                    sum1 += 2;
                }
                else
                {
                    ans1 += "1";
                    sum1 += 1;
                }
            }

            while (sum2 < n)
            {
                if (ans2[ans2.length() - 1] == '1')
                {
                    ans2 += "2";
                    sum2 += 2;
                }
                else
                {
                    ans2 += "1";
                    sum2 += 1;
                }
            }

            if (sum1 == n && sum2 == n)
            {
                cout << max(ans1, ans2) << "\n";
            }
            else if (sum1 == n)
            {
                cout << ans1 << "\n";
            }
            else if (sum2 == n)
            {
                cout << ans2 << "\n";
            }
        }
    }
}