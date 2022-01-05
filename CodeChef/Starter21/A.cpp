#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, xs, ys;
        cin>>n>>xs>>ys;

        int xc = (n+1)/2, yc = (n+1)/2;
        int xd = abs(xc - xs), yd = abs(yc - ys);
        if((xd + yd) % 2 == 0)
            cout<<"0\n";
        else
            cout<<"1\n";
    }
}
//   0 1 2 3 4 5 6
// 0 _ _ _ _ _ _ _
// 1 _ _ _ _ _ _ _
// 2 _ _ _ _ _ _ _
// 3 _ _ _ C _ _ _
// 4 _ _ _ _ _ _ _
// 5 _ _ _ _ _ _ _
// 6 _ _ _ _ _ _ _