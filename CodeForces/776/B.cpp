#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, a;
        cin >> l >> r >> a;

        long long rightLim = ((r / a) * a) - 1;

        if (rightLim < l)
            rightLim = l;
        long long rVal = (r / a) + r % a;
        long long lVal = (rightLim / a) + rightLim % a;

        cout << max(rVal, lVal) << "\n";
    }
}