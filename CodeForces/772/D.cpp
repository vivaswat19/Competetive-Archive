#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define mod 1000000007;

int main()
{
    long long n, p;
    cin >> n >> p;
    vector<long long> arr(n, 0);
    long long ans = n;
    map<long long, long long> m;
    long long maxVal = 1;
    for (long long i = 0; i < p; i++)
    {
        maxVal = (maxVal << 1);
    }

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > maxVal)
        {
            ans--;
        }
        else
        {
            m[arr[i]] = 1;
        }
    }

    sort(arr.begin(), arr.end());

    long long index = 0;
    while (index < arr.size())
    {
        long long val = arr[index];
        long long a1 = 2 * val + 1;
        long long a2 = 4 * val;

        if (a1 < maxVal && m[a1] == 0)
        {
            // cout << a1 << " ";
            m[a1] = 1;
            arr.push_back(a1);
            ans = (ans + 1) % mod;
        }

        if (a2 < maxVal && m[a2] == 0)
        {
            // cout << a2 << " ";
            m[a2] = 1;
            arr.push_back(a2);
            ans = (ans + 1) % mod;
        }
        index++;
    }
    cout << "\n";
    cout << ans << "\n";
}