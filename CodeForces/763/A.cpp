#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m, rb, cb, rd, cd;
        cin>>n>>m>>rb>>cb>>rd>>cd;
        int ans = 0;
        int dr = 1, dc = 1;
        int x = rb, y = cb;
        while(true) {
            // cout<<x<<" "<<y<<"\n";
            if(x == rd || y == cd) {
                cout<<ans<<"\n";
                break;
            }
            if(x + dr > n) {
                dr = -dr;
            }
            x += dr;

            if(y + dc > m) {
                dc = -dc;
            }
            y += dc;
            ans++;
        }
    }
}