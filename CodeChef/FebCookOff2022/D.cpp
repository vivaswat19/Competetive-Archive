#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <limits.h>
using namespace std;

int main()
{
    int n, m, q;
    cin >> n >> m;
    vector<int> price(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    vector<vector<int>> graph(n, vector<int>(n, 0));
    map<int, int> priceMap, neighbourCount;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u - 1][v - 1] = 1;
        graph[v - 1][u - 1] = 1;
        neighbourCount[v - 1]++;
        neighbourCount[u - 1]++;
    }
    cin >> q;
    vector<vector<int>> queries(q, vector<int>(2, -1));
    vector<char> queryType(q, '?');

    for (int i = 0; i < q; i++)
    {
        char type;
        cin >> type;
        if (type != '?')
        {
            int u, v;
            cin >> u >> v;
            queries[i][0] = u - 1;
            queries[i][1] = v - 1;
            queryType[i] = type;
        }
    }

    for (int i = 0; i < q; i++)
    {
        if (queryType[i] == '+')
        {
            int u = queries[i][0], v = queries[i][1];
            graph[u][v] = 1;
            graph[v][u] = 1;
            neighbourCount[v]++;
            neighbourCount[u]++;
        }
        else if (queryType[i] == '-')
        {
            int u = queries[i][0], v = queries[i][1];
            graph[u][v] = 0;
            graph[v][u] = 0;
            neighbourCount[v]--;
            neighbourCount[u]--;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                priceMap[i] = price[i];
            }
            int ans = 0;
            for (int i = 0; i < n; i++)
            {
                vector<bool> visited(n, false);
                int sum = 0;
                int minSum = INT_MAX;
                int bestVisit = -1;
                for (auto p : priceMap)
                {
                    sum += p.second;
                }
                for (int j = 0; j < n; j++)
                {
                    if (visited[j])
                    {
                        continue;
                    }

                    int tempSum = sum + 2 * neighbourCount[j] - (n - 1);
                    if (minSum > tempSum)
                    {
                        minSum = tempSum;
                        bestVisit = j;
                    }
                }
                ans += priceMap[bestVisit];
                visited[bestVisit] = true;

                for (int j = 0; j < n; j++)
                {
                    if (j == bestVisit)
                        continue;
                    else if (graph[bestVisit][j] == 1)
                        priceMap[j]++;
                    else
                        priceMap[j]--;
                }
            }
            cout << ans << "\n";
        }
    }
}
// 8 9 6 10
// 1 34
// 2 36
// 3 34 y
// 4 36

// 7 10 6 11
// 1 35 y
// 2 37
// 4 37

// 7 11 5 12
// 2 38 y
// 4 38

// 8 11 6 13
// 4 41 y