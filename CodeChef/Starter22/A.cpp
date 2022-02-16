#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int k;
        cin>>k;
        if(k%2 != 0) {
            cout<<"0\n";
        }
        else {
            int count =0;
            while(k%2 == 0) {
                count++;
                k/=2;
            }
            cout<<count<<"\n";
        }
    }
}