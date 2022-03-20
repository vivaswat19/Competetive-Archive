#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<map>

using namespace std;

int gcd(int a, int b) {
    if(b==0)
        return a;
    return gcd(b, a%b);
}


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
    }
}


// abc = a + b + c + a|b + b|c + a|b|c
// acb = a + b + c + a|c + b|c + a|b|c
// bac = a + b + c + a|b + a|c + a|b|c
// bca = a + b + c + b|c + a|c + a|b|c
// cab = a + b + c + a|c + a|b + a|b|c
// cba = a + b + c + b|c + a|b + a|b|c

// 6*(a + b + c) + 3*(a|b + b|c + a|c) + 6(a|b|c)
// 6(a+b+c) + 3a(b+c) + 3b(c) + 6abc

// abcd = a + b + c + d + a|b + b|c + c|d + a|b|c + b|c|d + a|b|c|d
// abdc = a + b + c + d + a|b + b|d + c|d + a|b|d + b|c|d + a|b|c|d
// acbd = a + b + c + d + a|c + b|c + b|d + a|b|c + b|c|d + a|b|c|d
// acdb = a + b + c + d + a|c + c|d + b|d + a|c|d + b|c|d + a|b|c|d
// adbc = a + b + c + d + a|d + b|d + b|c + a|b|d + b|c|d + a|b|c|d
// adcb = a + b + c + d + a|d + c|d + b|c + a|c|d + b|c|d + a|b|c|d
// bacd = a + b + c + d + a|b + a|c + c|d + a|b|c + a|c|d + a|b|c|d
// badc = a + b + c + d + a|b + a|d + c|d + a|b|d + a|c|d + a|b|c|d
// bcad = a + b + c + d + b|c + a|c + a|d + a|b|c + a|c|d + a|b|c|d
// bcda = a + b + c + d + b|c + c|d + a|d + b|c|d + a|c|d + a|b|c|d
// bdac = a + b + c + d + b|d + a|d + a|c + a|b|d + a|c|d + a|b|c|d
// bdca = a + b + c + d + b|d + c|d + a|c + b|c|d + a|c|d + a|b|c|d
// cabd = a + b + c + d + a|c + a|b + b|d + a|b|c + a|b|d + a|b|c|d
// cadb = a + b + c + d + a|c + a|d + b|d + a|c|d + a|b|d + a|b|c|d
// cbad = a + b + c + d + b|c + a|b + a|d + a|b|c + a|b|d + a|b|c|d
// cbda = a + b + c + d + b|c + b|d + a|d + b|c|d + a|b|d + a|b|c|d
// cdab = a + b + c + d + c|d + a|d + a|b + a|c|d + a|b|d + a|b|c|d
// cdba = a + b + c + d + c|d + b|d + a|b + b|c|d + a|b|d + a|b|c|d
// dabc = a + b + c + d + a|d + a|b + b|c + a|b|d + a|b|c + a|b|c|d
// dacb = a + b + c + d + a|d + a|c + b|c + a|c|d + a|b|c + a|b|c|d
// dbac = a + b + c + d + b|d + a|b + a|c + a|b|d + a|b|c + a|b|c|d
// dbca = a + b + c + d + b|d + b|c + a|c + b|c|d + a|b|c + a|b|c|d
// dcab = a + b + c + d + c|d + a|c + a|b + a|c|d + a|b|c + a|b|c|d
// dcba = a + b + c + d + c|d + b|c + a|b + b|c|d + a|b|c + a|b|c|d

// 24 * (a+b+c+d) + 12*(ab + ac + ad + bc + bd + cd) + 12*(abc + abd + acd + bcd) + 24 * (abcd)
// 24(a+b+c+d) + 12a(b+c+d) + 12b(c+d) + 12c(d) + 12ab(c + d) + 12bc(d) + 24abcd

// a(24 + 12(b+c+d) + 12(bc + bd + cd) + 6bcd) + b()


// 4! * 1! * s1 + 3! * 2! * s2 + 2! * 3! * s3 + 1! * 4! * s4
