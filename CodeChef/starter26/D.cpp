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
        string a, b;
        cin >> a >> b;
        vector<char> A(n), B(n);
        for (int i = 0; i < n; i++)
        {
            A[i] = a[i];
            B[i] = b[i];
        }

        sort(A.begin(), A.end());
        sort(B.rbegin(), B.rend());

        string ans = "";

        for (int i = 0; i < n; i++)
        {
            ans += A[i];
            ans += B[i];
        }
        cout << ans << "\n";
    }
}
