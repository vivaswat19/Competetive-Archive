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
        int b, c;
        cin>>b>>c;
        if(b%c == 0) {
            cout<<"1\n";
        }
        else if(c%b == 0) {
            cout<<c/b<<"\n";
        }
        else {
             int common = gcd(b, c);
             cout<<c/common<<"\n";
        }
    }
}