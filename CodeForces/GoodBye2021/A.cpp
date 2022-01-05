#include<iostream>
#include<map>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        map<int, int> m;
        int ans = 0;

        for(int i=0; i<n; i++) {
            int a;
            cin>>a;
            a = abs(a);
            if(m[a] == 0 || (m[a] == 1 && a != 0))
                ans++;
            m[a]++;
        }
        cout<<ans<<"\n";
    }
}