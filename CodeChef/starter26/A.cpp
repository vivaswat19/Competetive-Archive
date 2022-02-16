#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int ans = 0;
        while (n > 0)
        {
            if (n > 100)
            {
                ans += min(x, 25 * y);
                n -= 100;
            }
            else
            {
                int num_cars = n / 4;
                num_cars += n % 4 ? 1 : 0;

                ans += min(x, num_cars * y);
                n = 0;
            }
        }
        cout << ans << "\n";
    }
}