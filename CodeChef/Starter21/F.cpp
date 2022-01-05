#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_set>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n, 0);

        map<int, unordered_set<int> > rm;
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        int q;
        cin>>q;
        for(int i=0; i<q; i++) {
            int a, b;
            cin>>a>>b;
            rm[b].insert(a);
        }
        vector<int> dp(n+1, 1);
        vector<int> dpIndex(n+1, -1);
        int maxIndex = -1, maxVal = -1;

        for(int i=1; i<n; i++) {
            int b = arr[i];
            for(int j=0; j<i; j++) {
                if(rm[b].find(arr[j]) != rm[b].end()) {
                    if(dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j]+1;
                        dpIndex[i] = j;
                    }
                }
            }

            if(maxVal < dp[i]) {
                maxVal = dp[i];
                maxIndex = i;
            }
        }
        vector<int> ans;

        while(maxIndex != -1) {
            ans.push_back(maxIndex+1);
            maxIndex = dpIndex[maxIndex];
        }

        cout<<maxVal<<"\n";
        for(int i=ans.size() - 1; i>=0; i--) {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}