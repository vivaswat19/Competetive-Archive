#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n, 0);
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        int index = 0;
        int ans = 0;
        while(index < n) {
            int maxVal = arr[index];
            int minVal = arr[index];
            int newMaxVal = arr[index];
            do {
                maxVal = newMaxVal;
                int rightIndex = -1;
                for(int i=n-1; i>index; i--) {
                    if(arr[i] < maxVal) {
                        rightIndex = i;
                        break;
                    }
                }
                if(rightIndex == -1)
                    break;

                for(int i = index+1; i<=rightIndex; i++) {
                    newMaxVal = max(newMaxVal, arr[i]);
                    minVal = min(minVal, arr[i]);
                }
                index = rightIndex;
            }while(newMaxVal != maxVal);

            ans += (maxVal - minVal);
            index++;
        }

        cout<<ans<<"\n";
    }
}
