#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string temp;
        cin >> temp;
        int count0 = 0, count1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (temp[i] == '0')
                count0++;
            else
                count1++;
        }

        while (count0--)
        {
            cout << "0";
        }
        while (count1--)
        {
            cout << "1";
        }
        cout << "\n";
    }
}