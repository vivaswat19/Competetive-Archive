#include<iostream>
#include<vector>
#include<queue>
#include<limits.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n, 0);
        int minV = INT_MAX;
        for(int i=0; i<n; i++) {
            cin>>arr[i];
            minV = min(minV, arr[i]);
        }
        
        if(n < 2) {
            cout<<min(arr[0], arr[1])<<"\n";
            continue;
        }
        else {
            priority_queue<int, vector<int>, greater<int> > q;
            for(int i=2; i<n; i++) {
                minV = q.empty() ? minV : q.front();
                if((arr[i-2] <= minV || arr[i-1] <= minV) && arr[i] != minV) {
                    
                }
                else {
                    
                }
            }
        }
    }
    return 0;
}