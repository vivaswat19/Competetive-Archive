#include <iostream>
#include <vector>
#include <map>
#include <limits.h>
#include <unordered_set>

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
        else
        {
            long long ans = 1;
            ans = ans << (n);
            ans--;
            cout << ans << "\n";
        }
    }
}

// 1
// 1 2
// 1

// 2
// 1 2 3 4
// 1 3
// 3
// 3
// 1 2 3 4

// 4
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
// 1 3 5 7 9 11 13 15
// 3 7 11 15
// 7 15
// 15

// 5
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32
// 1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31
// 3 7 11 15 19 23 27 31
// 3 15 23 31
// 15 31
// 31