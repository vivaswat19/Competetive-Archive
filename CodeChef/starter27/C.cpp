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
        string str, copy;
        
        cin>>str;
        int n = str.length();
        for(int i=str.length() - 1; i>= 0; i--) {
            copy += str[i];
        }
        
        int p1 = 0, p2 = 0;
        while(p1 < n && p2 < n) {
            if(str[p1] == copy[p2]) {
                p2++;
            }
            p1++;
        }
        cout<<n - p2<<"\n";
    }
}
