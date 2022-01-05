#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
#define mod 1000000007;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m, rb, cb, rd, cd, p;
        cin>>n>>m>>rb>>cb>>rd>>cd>>p;
        int k = ceil(100.0/p);
        long long ans = 0;
        int dr = 1, dc = 1;
        int x = rb, y = cb;
        int count = 0;
        while(true) {
            // cout<<x<<" "<<y<<"\n";
            if(x == rd || y == cd) {
                count++;
                if(count >= k) {
                    cout<<ans<<"\n";
                    break;
                }
            }
            if(x + dr > n || x + dr <= 0) {
                dr = -dr;
            }
            x += dr;

            if(y + dc > m || y + dc <= 0) {
                dc = -dc;
            }
            y += dc;
            ans = (ans+1);
        }
    }
}