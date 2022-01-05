#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n, 0);
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        int orVal = arr[n-1];
        int ans = 0;
        for(int i=n-2; i>=0; i--) {
            int temp = orVal & arr[i];
            ans = temp | ans;
            orVal = orVal | arr[i];
        }
        cout<<ans<<"\n";
    }
}


//A = 1 2 3 4
//B = 0 1 0 2 0 0
//B = 0 0 0 0 1 2 | b1 b2 b3 b4 b5 b6
//B = 0 0 0 1 2   | b1|b6 b2 b3 b4 b5
//B = 0 0 1 2     | b1|b5|b6 b2 b3 b4
//B = 0 1 2       | b1|b4|b5|b6 b2 b3
//B = 1 2         | b1|b3|b4|b5|b6 b2
//B = 1           | b1|b2|b3|b4|b5|b6

// b1|b2|b3|b4|b5|b6
// a1 & (a2|a3|a4) | a2 & (a3|a4) | a3 & (a4)
