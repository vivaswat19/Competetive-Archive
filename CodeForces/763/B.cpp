#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int L = 1, R = n;

        vector<vector<bool> > grid(n+1, vector<bool>(n+1, false));
        vector<vector<int> > ans(n+1, vector<int>(n+1, -1));
        vector<vector<int> > inp;

        for(int i=0; i<n; i++) {
            int a,b;
            cin>>a>>b;
            vector<int> temp;
            temp.push_back(a);
            temp.push_back(b);
            inp.push_back(temp);
            grid[a][b] = true;
        }

        queue<vector<int> > q;
        vector<int> temp;
        temp.push_back(L);
        temp.push_back(R);
        q.push(temp);
        while(!q.empty()) {
            vector<int> cur = q.front();
            q.pop();
            int l = cur[0], r = cur[1];
            // cout<<"q "<<l<<" "<<r<<"\n";
            if(l == r) {
                ans[l][r] = l;
                continue;
            }
            if(grid[l+1][r]) {
                ans[l][r] = l;
                vector<int> temp1;
                temp1.push_back(l+1);
                temp1.push_back(r);
                q.push(temp1);
            }
            else if(grid[l][r-1]) {
                ans[l][r] = r;
                vector<int> temp1;
                temp1.push_back(l);
                temp1.push_back(r-1);
                q.push(temp1);
            }
            else {
                for(int i=l+1; i<r; i++) {
                    if(grid[l][i-1] && grid[i+1][r]) {
                        // cout<<"d "<<l<<" "<<i-1<<" "<<i<<" "<<i+1<<" "<<r<<"\n";
                        ans[l][r] = i;
                        vector<int> temp1;
                        temp1.push_back(l);
                        temp1.push_back(i-1);
                        q.push(temp1);
                        vector<int> temp2;
                        temp2.push_back(i+1);
                        temp2.push_back(r);
                        q.push(temp2);
                        break;
                    }
                }
            }
        }

        for(int i=0; i<n; i++) {
            cout<<inp[i][0]<<" "<<inp[i][1]<<" "<<ans[inp[i][0]][inp[i][1]]<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}