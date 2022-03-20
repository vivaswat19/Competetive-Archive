#include <iostream>
#include <vector>
#include <math.h>
#include <limits.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, d;
        scanf("%d %d", &n, &d);
        int ans = INT_MIN;
        vector<int> arr1(n, 0), arr2(n, 0);
        for (int i = 0; i < n; i++)
            scanf("%d", &arr1[i]);

        for (int i = 0; i < n; i++)
            scanf("%d", &arr2[i]);

        for (int i = 0; i < n; i++)
        {
            int j = arr1[i] - 1;

            for (; j < n; j++)
            {
                ans = max(ans, ((i + 1) * (j + 1)) - (d * (arr2[i] ^ arr2[j])));
            }
        }
        cout << ans << "\n";
    }
}