#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <map>
#include <math.h>

using namespace std;

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
            if (arr1[i][0] == 1)
            {
                ans = false;
                break;
            }
        }

        if (!ans)
        {
            cout << "-1\n";
            continue;
        }
        int a = 0;
        vector < vector<int> ann;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr1[i][j] == 1)
                {
                }
            }
        }
    }
}