#include<iostream>
using namespace std;

long long pow(int x, int y) {
    long long result = 1;
    while (y > 0) {
        if (y % 2 == 0)
        {
            x = x * x;
            y = y / 2;
        }
        else
        {
            result = result * x;
            y = y - 1;
        }
    }
    return result;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        if(n <= 2) {
            cout<<0<<"\n";
            continue;
        }
        long long ans = 10 * (n-2) * pow(3, n-3);
        cout<<ans<<"\n";
    }
    return 0;
}

// 10*(n-2)*3^(n-3)

// n = 3
// _ _ _
// _ 2 _ : 2*2
// _ 1 _ : 2
// _ 0 _ : 2*2
// ans = 10

// n = 4
// _ _ _ _
// _ 2 _ _ : 2*2*3 = 12
// _ 1 _ _ : 2*3 = 6
// _ 0 _ _ : 2*2*3 = 12
// _ _ 2 _ : 2*2*3 = 12
// _ _ 1 _ : 2*3 = 6
// _ _ 0 _ : 2*2*3 = 12

// n = 5
// _ _ _ _ _
// _ 2 _ _ _ : 2*2*3*3 = 36
// _ 1 _ _ _ : 2*3*3 = 18
// _ 0 _ _ _ : 2*2*3*3 = 36
// _ _ 2 _ _ : 2*2*3*3 = 36
// _ _ 1 _ _ : 2*3*3 = 18
// _ _ 0 _ _ : 2*2*3*3 = 36
// _ _ _ 2 _ : 2*2*3*3 = 36
// _ _ _ 1 _ : 2*3*3 = 18
// _ _ _ 0 _ : 2*2*3*3 = 36