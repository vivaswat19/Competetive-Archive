#include<iostream>
#include<string>
#include<queue>
#include<map>
#include<limits.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        priority_queue<int, vector<int>, greater<int> > odd, even;
        for(int i=0; i<k; i++) {
            even.push(0);
        }
        map<char, int> m;
        for(int i=0; i<str.length(); i++) {
            m[str[i]]++;
        }

        for(auto me : m) {
            char c = me.first;
            int count = me.second;

            if(count == 1) {
                if(even.empty()) {
                    odd.push(1);
                }
                else {
                    int f1 = even.top();
                    f1 += 1;
                    odd.push(f1);
                    even.pop();
                }
            }
            else if(count % 2 == 0) {
                if(!odd.empty() && !even.empty()) {
                    int f1 = odd.top(), f2 = even.top();

                    if(f1 < f2) {
                        f1 += count;
                        odd.pop();
                        odd.push(f1);
                    }
                    else {
                        f2 += count;
                        even.pop();
                        even.push(f2);
                    }
                }
                else if(!odd.empty()) {
                    int f1 = odd.top();
                    odd.pop();
                    f1 += count;
                    odd.push(f1);
                }
                else if(!even.empty()) {
                    int f1 = even.top();
                    even.pop();
                    f1 += count;
                    even.push(f1);
                }
                else {
                    even.push(count);
                }
            }
            else {
                if(!odd.empty() && !even.empty()) {
                    int f1 = odd.top(), f2 = even.top();

                    if(f1 < f2) {
                        f1 += count - 1;
                        odd.pop();
                        odd.push(f1);
                        f2 += 1;
                        even.pop();
                        even.push(f2);
                    }
                    else {
                        f2 += count;
                        even.pop();
                        odd.push(f2);
                    }
                }
                else if(!odd.empty()) {
                    int f1 = odd.top();
                    if(count < f1) {
                        odd.push(count);
                    }
                    else {
                        odd.pop();
                        f1 += count-1;
                        odd.push(f1);
                        odd.push(1);
                    }
                }
                else if(!even.empty()) {
                    int f1 = even.top();
                    even.pop();
                    f1 += count;
                    odd.push(f1);
                }
                else {
                    odd.push(count);
                }
            }
        }
        int minV = INT_MAX;
        while(!odd.empty()) {
            int f = odd.top();
            odd.pop();
            if(f == 0)
                continue;
            minV = min(minV, f);
            if(f > minV)
                break;
        }
        while(!even.empty()) {
            int f = even.top();
            even.pop();
            if(f == 0)
                continue;
            minV = min(minV, f);
            if(f > minV)
                break;
        }

        cout<<minV<<"\n";
    }
}