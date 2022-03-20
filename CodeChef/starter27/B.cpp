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
        string str;
        cin>>str;
        int ans=1;
        char last = str[0]; 
        for(int i=1; i<n; i++) {
            if(str[i] != last) {
                ans++;
                last = str[i];
            }
        }
        cout<<ans<<"\n";
    }
}