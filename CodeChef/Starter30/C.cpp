#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <queue>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x2--;
        y2--;
        x1--;
        y1--;
        vector<vector<int> > arr(n, vector<int>(m, 0));
        bool same = false;
        int v1 = (x1 + y1) % 2;
        int v2 = (x2 + y2) % 2;
        if (v1 == v2)
            same = true;

        if (same)
        {
            if (x2 - 1 >= 0)
                arr[x2 - 1][y2] = 3;
            if (x2 + 1 < n)
                arr[x2 + 1][y2] = 3;
            if (y2 - 1 >= 0)
                arr[x2][y2 - 1] = 3;
            if (y2 + 1 < m)
                arr[x2][y2 + 1] = 3;
        }

        // cout << "hello\n";
        arr[x1][y1] = 1;
        arr[x2][y2] = 2;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] != 0)
                {
                    cout << arr[i][j] << " ";
                }
                else if ((i + j) % 2 == v1)
                {
                    cout << "1 ";
                }
                else
                {
                    cout << "2 ";
                }
            }
            cout << "\n";
        }
    }
}
