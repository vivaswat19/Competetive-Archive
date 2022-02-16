#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long n, a;
        cin>>n>>a;
        if(n == 1) {
            if(a%2 == 0)
                cout<<"Even\n";
            else
                cout<<"Odd\n";
            
            continue;
        }

        if(a%2 != 0) {
            if(n%2 == 0) 
                cout<<"Even\n";
            else
                cout<<"Odd\n";
        }
        else {
            cout<<"Impossible\n";
        }

    }
}
