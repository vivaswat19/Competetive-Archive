#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        if(n == 0) {
            cout<<"NO\n";
        }
        else if(n==1) {
            cout<<"YES\n";
            cout<<"1\n";
        }
        else if(n == 2) {
            cout<<"NO\n";
        }
        else if(n%2 != 0) {
            cout<<"YES\n";
            long long val = 1;
            while(val <= n) {
                cout<<val<<" ";
                val += 2;
            }
            val -= 3;
            while(val > 0) {
                cout<<val<<" ";
                val -= 2;
            }
            cout<<"\n";
        }
        else {
            cout<<"YES\n";
            cout <<1<<" ";
            long long count = n/2;
            count--;
            long long val = n - count + 1;
            
            while( val <= n) {
                cout<<val<<" ";
                val++;
            }

            cout<<2<<" ";
            val = n - count;
            while(val > 2) {
                cout<<val<<" ";
                val--;
            }
            cout<<"\n";
        }
    }
}

