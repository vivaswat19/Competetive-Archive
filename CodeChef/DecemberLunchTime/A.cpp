#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<long long> arr(n, 0);
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        if(n <= 2) {
            cout<<0<<"\n";
            continue;   
        }

        sort(arr.begin(), arr.end());

        long long val1 = (arr[n-1] - arr[0]) * arr[n-2];
        long long val2 = (arr[n-2] - arr[0]) * arr[n-1];

        cout<<max(val1, val2)<<"\n";
    }
}