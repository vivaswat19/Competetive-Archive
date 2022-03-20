#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <map>
#include <math.h>
#include <set>

using namespace std;

set<int> st;

vector<int> primeFactors(int n)
{
    vector<int> ans;
    while (n % 2 == 0)
    {
        ans.push_back(2);
        st.insert(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            ans.push_back(i);
            st.insert(i);
            n = n / i;
        }
    }
    if (n > 2)
    {
        ans.push_back(n);
        st.insert(n);
    }

    return ans;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        st.clear();
        int x, d;
        cin >> x >> d;

        if (x % (d * d) != 0)
        {
            cout << "NO\n";
            continue;
        }
        x = x / (d * d);
        if (isPrime(d))
        {
            while (x % d == 0)
            {
                x = x / d;
            }
        }

        vector<int> roots = primeFactors(x);
        int count = 0;
        sort(roots.begin(), roots.end());
        for (int i = 0; i < roots.size(); i++)
        {
            if ((x / roots[i]) % d != 0 && roots[i] % d != 0)
            {
                count++;
            }
            else if ()
        }
        if (count >= 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}