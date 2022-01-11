#include<iostream>
#include<vector>
#include<unordered_set>
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
        int n;
        cin>>n;
        vector<int> arr(n, 0);
        unordered_set<int> s;
        for(int i=0; i<n; i++) {
            cin>>arr[i];
            while(arr[i] > n) {
                arr[i] /= 2;
            }
        }

        for(int i=0; i<n; i++) {
            while(arr[i] > 0 && s.find(arr[i]) != s.end()) {
                arr[i] /= 2;
            }
            // cout<<arr[i]<<" ";
            if(arr[i] != 0)
                s.insert(arr[i]);
        }
        // cout<<"\n";
        if(s.size() == n) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}