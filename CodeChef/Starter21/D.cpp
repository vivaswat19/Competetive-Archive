#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n, 0);
        int sum = 0;
        for(int i=0; i<n; i++) {
            cin>>arr[i];
            sum += arr[i];
        }
        int medianIndex = n%2 == 0 ? (n/2) - 1 : (n-1)/2;
        float median = n%2 == 0 ? arr[(n/2) - 1] : arr[((n+1)/2) - 1];
        float mean = sum*1.0 / n;

        if(mean == median) {
            cout<<"0\n";
            continue;
        }
        int curIndex = medianIndex + 1;
        int count = 1;
        int ans = 0;
        while(median < mean) {
            int diff = arr[curIndex];
            median += 
            cout<<mean<<" "<<median<<" "<<count<<" "<<ans<<"\n";
        }
        ans += (median - mean)*n;
        cout<<ans<<"\n";

    }
}

// 1 1 1 1000000000 1000000000

