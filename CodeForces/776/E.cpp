#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <unordered_set>
#include <map>
#include <stack>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        vector<int> diff;
        diff.push_back(arr[0] - 1);

        int minDiff = arr[0] - 1, minIndex = 0;
        for (int i = 1; i < n; i++)
        {
            diff.push_back(arr[i] - arr[i - 1] - 1);
            if (minDiff > arr[i] - arr[-1] - 1)
            {
                minDiff = arr[i] - arr[i - 1] - 1;
                minIndex = i;
            }
        }
    }
}
