#include <iostream>
#include <vector>
#include <map>
#include <math.h>
using namespace std;

#define mod 1000000007

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> amount(n, 0);
    // map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> amount[i];
    }

    for (int i = 0; i < m; i++)
    {
        long long c0, x;
        cin >> c0 >> x;
        c0--;
        for (int j = 0; j < x; j++)
        {
            int wi, ci;
            cin >> wi >> ci;
            ci--;
            long long count = amount[c0];
            amount[ci] = ((amount[ci] % mod) + (((wi % mod) * (count % mod)) % mod)) % mod;
        }
        amount[c0] = 0;
    }

    for (int i = 0; i < n; i++)
        cout << amount[i] << "\n";
}