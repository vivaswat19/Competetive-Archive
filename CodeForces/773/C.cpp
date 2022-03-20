#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <limits.h>

#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin>>n>>x;
        vector<ll> arr(n, 0);
        ll maxVal = INT_MIN;
        for(ll i=0; i<n; i++) {
            cin>>arr[i];
            maxVal = max(maxVal, arr[i]);
        }


        sort(arr.begin(), arr.end());
        map<ll, ll> left;
        for(int i=0; i<n; i++) {
            left[arr[i]]++;
        }
        int ans = 0;
        for(auto i : left) {
            int val = i.first;
            int next = val*x;
            int count = i.second;
            while(count--) {
                if(left[next]) {
                    left[next]--;
                }
                else 
                    ans++;
            }
        }
        cout<<ans<<"\n";
    }
}
