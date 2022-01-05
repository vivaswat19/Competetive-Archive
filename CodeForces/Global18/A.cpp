#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n, 0);
        int sum = 0;
        for(int i=0; i<n;i++) {
            cin>>arr[i];
            sum += arr[i];
        }
        int ans = sum%n;

        if(ans == 0)
            cout<<0<<"\n";
        else {
            cout<<1<<"\n";
        }
    }
}
