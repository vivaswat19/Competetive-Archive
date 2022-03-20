#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <map>
#include <math.h>

using namespace std;

bool check(vector<vector<int> > arr, int x, int y, int n, int m)
{
    if (arr[x][y] == 0)
        return false;

    if (x - 1 >= 0 && y - 1 >= 0 && arr[x - 1][y] == 1 && arr[x][y - 1] == 1)
        if (arr[x - 1][y - 1] == 0)
            return true;

    if (x - 1 >= 0 && y + 1 < m && arr[x - 1][y] == 1 && arr[x][y + 1] == 1)
        if (arr[x - 1][y + 1] == 0)
            return true;

    if (y - 1 >= 0 && x + 1 < n && arr[x + 1][y] == 1 && arr[x][y - 1] == 1)
        if (arr[x + 1][y - 1] == 0)
            return true;

    if (y + 1 < m && x + 1 < n && arr[x + 1][y] == 1 && arr[x][y + 1] == 1)
        if (arr[x + 1][y + 1] == 0)
            return true;

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr1(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;

            for (int j = 0; j < temp.length(); j++)
            {
                arr1[i][j] = temp[j] == '1' ? 1 : 0;
            }
        }
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (check(arr1, i, j, n, m))
                {
                    ans = false;
                    break;
                }
            }
            if (!ans)
                break;
        }

        if (!ans)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
        }
    }
}