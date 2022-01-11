#include<iostream>

using namespace std;

bool check(int a, int b, int c) {
    if(a+c == 2*b)
        return true;
    return false;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int a,b,c;
        cin>>a>>b>>c;

        int d1 = b - a;
        int d2 = c - b;
        float d3 = (c - a);
        
        if(d1 == d2) {
            cout<<"YES\n";
            continue;
        }
        // changing a
        int a1 = b - d2;
        // changing c
        int c1 = b + d1;
        // changing b2
        int b1 = a + int(d3/2);
        // cout<<a1<<" "<<b1<<" "<<c1<<"\n";
        
        if(check(a,b,c1) && c1 > c && c1%c==0) {
            cout<<"YES\n";
            continue;
        }
        if(check(a,b1,c) && b1 > b && b1%b==0) {
            cout<<"YES\n";
            continue;
        }
        if(check(a1,b,c) && a1 > a && a1%a==0) {
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";
    }
}