#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <limits.h>
#include <queue>
#include <math.h>

using namespace std;

#define ll long long
#define fo1(i, n) for (int i = 0; i < n; i++)
#define fo2(i, a, b) for (int i = a; i < b; i++)
#define for1(i, n) for (int i = n; i >= 0; i--)
#define for2(i, a, b) for (int i = a; i >= b; i--)
#define pb push_back
#define vec vector
#define uns unordered_set
#define fi first
#define sec second

void solve(int val)
{
    int r, c;
    cin >> r >> c;
    cout << "Case #" << val << ":\n";
    for (int i = 0; i < 2 * r + 1; i++)
    {
        for (int j = 0; j < 2 * c + 1; j++)
        {
            if (i == 0 && j == 0)
            {
                cout << ".";
                continue;
            }
            else if (i == 0 && j == 1)
            {
                cout << ".";
                continue;
            }
            else if (i == 1 && j == 0)
            {
                cout << ".";
                continue;
            }
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    cout << "+";
                }
                else
                {
                    cout << "-";
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    cout << "|";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        cout << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        solve(i);
        i++;
    }
}