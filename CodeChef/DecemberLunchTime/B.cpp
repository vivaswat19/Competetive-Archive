#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        string str;
        cin>>str;
        if(k >= n)
            k = n;
        int K = k;
        vector<int> arr(n, 0);
        for(int i=0; i<n; i++)
            arr[i] = i;
        int index = 0;
        while(k > 0) {
            int sub = index;
            int add = index + 1;

            int totalSub = sub * ((k / 2) + (k%2));
            int totalAdd = add * (k/2);
            arr[index] += totalAdd;
            arr[index] -= totalSub;

            k--;
            index++;
        }
        string ans = "";
        for(int i=0; i<K; i++) {
            ans += str[arr[i]];
        }
        for(int i=K; i<n; i++) {
            ans += str[i];
        }
        cout<<ans<<"\n";
    }
    return 0;
}

// n = 10, k = 8

//              a   b   c   d   e   f   g   h
// abcdefghij   0   1   2   3   4   5   6   7
// abcdefghij   0   1   2   3   4   5   6   7
// bacdefghij   1   0   2   3   4   5   6   7
// cabdefghij   1   2   0   3   4   5   6   7
// dbacefghij   2   1   3   0   4   5   6   7
// ecabdfghij   2   3   1   4   0   5   6   7 
// fdbaceghij   3   2   4   1   5   0   6   7
// gecabdfhij   3   4   2   5   1   6   0   7
// hfdbacegij   4   3   5   2   6   1   7   0
//              -0  -1  -2  -3  -4  -5  -6  -7
//              +1  +2  +3  +4  +5  +6  +7  +8
//              8   7   6   5   4   3   2   1