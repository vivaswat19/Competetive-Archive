#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int l, r;
        cin>>l>>r;
        vector<int> bitCount(32, 0);
        int maxPos = 0;
        int ans = INT_MAX;
        for(int i=l; i<=r; i++) {
            int pos = 0;
            int temp = i;
            while(temp > 0) {
                if((temp & 1) == 1) {
                    bitCount[pos]++;
                    ans = min(ans,(r - l + 1) - bitCount[pos]);
                }
                temp = temp >> 1;
                pos++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
// 0010
// 0011
// 0100
// 0101
// 0110
// 0111
// 1000
