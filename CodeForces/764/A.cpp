#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<long long> a(n, 0);
        long long minV = INT_MAX, maxV = INT_MIN; 
        for(int i=0; i<n; i++) {
            cin>>a[i];
            minV = min(minV, a[i]);
            maxV = max(maxV, a[i]);
        }

        cout<<abs(maxV - minV)<<"\n";
    }
}