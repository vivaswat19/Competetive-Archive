#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> B(2 * n, 0);
        long long sum = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> B[i];
            sum += B[i];
        }
        if (sum % 2 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}

// -2 2 4 4