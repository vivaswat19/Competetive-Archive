#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int count = 0;
        vector<int> localMax(n, 0);
        if (n >= 3)
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
                {
                    localMax[i] = 1;
                }
            }

            for (int i = 1; i < n - 1; i++)
            {
                if (localMax[i] == 0 && localMax[i - 1] == 1 && localMax[i + 1] == 1)
                {
                    count++;
                    arr[i] = max(arr[i - 1], arr[i + 1]);
                    localMax[i - 1] = 0;
                    localMax[i + 1] = 0;
                }
            }

            for (int i = 0; i < n - 1; i++)
            {
                if (localMax[i] == 1 && localMax[i - 1] == 0 && localMax[i + 1] == 0)
                {
                    count++;
                    arr[i] = max(arr[i - 1], arr[i + 1]);
                    localMax[i - 1] = 0;
                    localMax[i + 1] = 0;
                }
            }
        }

        cout << count << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}
