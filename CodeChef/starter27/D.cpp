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
        vector<int> arr(n, 0);
        int oddVal = 0;
        for(int i=0; i<n; i++) {
            cin>>arr[i];
            if(arr[i]%2 != 0)
                oddVal++;
        }
        int maxChange = (2*n)/3;
        if(oddVal <= maxChange) {
            for(int i=0; i<n; i++) {
                if(arr[i]%2 != 0) {
                    arr[i] = 2;
                }
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
            continue;
        }

        int makeChanges = 0;

        for(int i=1; i<n-1; i++) {
            if(gcd(arr[i-1], arr[i]) == 1 && gcd(arr[i], arr[i+1]) == 1) {
                int temp = gcd(arr[i-1], arr[i+1]);
                if(temp != 1) {
                    makeChanges++;
                    arr[i] = temp;
                }
            }
        }
        if(gcd(arr[0], arr[1]) == 1) {
            arr[0] = arr[1];
            makeChanges++;
        }
        if(gcd(arr[n-1], arr[n-2]) == 1) {
            arr[n-1] = 2;
            makeChanges++;
        }

        for(int i=1; i<n; i++) {
            if(gcd(arr[i-1], arr[i]) == 1) {
                makeChanges+= 2;
                arr[i-1] = 2;
                arr[i] = 2;
            }
        }

        for(int i=0; i<n; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
}


// 100010001110110
// 