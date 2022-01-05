#include<iostream>
using namespace std;

long long pow(int x, int y) {
    long long result = 1;
    while (y > 0) {
        if (y % 2 == 0)
        {
            x = x * x;
            y = y / 2;
        }
        else
        {
            result = result * x;
            y = y - 1;
        }
    }
    return result;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        string str;
        cin>>str;
        int count = 0;
        int count1 = 0;
        for(int i=0; i<n-k; i++) {
            if(str[i] == '1') {
                count1++;
            }
        }
        for(int i=n-k; i<n; i++) {
            if(str[i] == '1')
                count1++;
            cout<<count1<<" v \n";

            if(count1%2 != 0)
                count++;
            
            if(str[i - n + k] == '1')
                count1--;
        }
        cout<<count<<"\n";
    }
    return 0;
}
