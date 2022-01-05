#include<iostream>

using namespace std;
int primeFactors(int m) {
    int ans = 0;
    if(m%2 == 0){
        ans++;
        while(m%2 == 0) {
            m /= 2;
            // cout<<2<<" ";
        }
    }

    for(int i=3; i*i <= m; i += 2) {
        if(m%i == 0) {
            ans++;
            while(m%i == 0) {
                m /= i;
                // cout<<i<<" ";
            }
        }
    }
    if(m > 2) {
        ans++;
        // cout<<m<<" "; 
    }

    return ans;

}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        int pf = primeFactors(m);
        

        if(pf > 0 && n%pf == 0) {
            cout<<pf<<"\n";
        }
        else {
            while(pf > 0 && n%pf != 0)
                pf--;
            cout<<pf<<"\n";
        }
    }
}