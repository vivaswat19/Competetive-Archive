#include<iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string str;
        cin>>str;
        string rev = "", ans = "";
        rev += str[0];
        ans += str[0];
        string minStr = "";
        minStr += str[0];
        minStr += str[0];
        for(int i=1; i<n; i++) {
            if(str[i] > str[i-1])
                break;

            rev = str[i] + rev;
            ans = ans + str[i];
            if(ans + rev < minStr)
                minStr = ans + rev;
        }
        cout<<minStr<<"\n";
    }
}
