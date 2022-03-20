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

        vector<int> bitCount(32, 0);
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            int index = 0;
            while (temp > 0)
            {
                if ((temp & 1) == 1)
                {
                    bitCount[index]++;
                }
                index++;
                temp = temp >> 1;
            }
        }
        long long multi = 1;
        long long ans = 0;
        for (int i = 0; i < 32; i++)
        {
            if (bitCount[i] > 0)
            {
                ans += multi;
            }
            multi = multi << 1;
        }
        cout << ans << "\n";
    }
}