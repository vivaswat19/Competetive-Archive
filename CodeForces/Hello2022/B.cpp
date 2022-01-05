#include<iostream>
#include<vector>
#include<map>
#include<queue>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int> > arr(n, vector<int>(3, 0));
        for(int i=0; i<n; i++) {
            cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
        }
        vector<int> ans;
        ans.push_back(arr[0][2]);
        map<int, priority_queue<int, vector<int>, greater<int> > > Left, Right;
        
        int L = arr[0][0], R = arr[0][1];
        Left[L].push(arr[0][2]);
        Right[R].push(arr[0][2]);

        for(int i=1; i<n; i++) {
            if(arr[i][0] < L && arr[i][1] > R) {
                // cout<<"a\n";
                L = arr[i][0];
                R = arr[i][1];
                ans.push_back(arr[i][2]);                           //compulsory
                Left[L].push(arr[i][2]);
                Right[R].push(arr[i][2]);
            }
            else if(arr[i][0] < L && arr[i][1] == R) {
                L = arr[i][0];
                ans.push_back(arr[i][2]);                           //compulsory
                // cout<<"b\n";
                Left[L].push(arr[i][2]);
                Right[R].push(arr[i][2]);
            }
            else if(arr[i][0] < L && arr[i][1] < R) {
                int cost = arr[i][2] + Right[R].top();              //compulsory
                L = arr[i][0];
                // cout<<Right[R].top()<<"c\n";
                ans.push_back(cost);
                Left[L].push(cost);
                Right[R].push(cost);
            }
            else if(arr[i][0] == L && arr[i][1] > R) {
                ans.push_back(arr[i][2]);                           //compulsory
                R = arr[i][1];
                // cout<<"d\n";
                Left[L].push(arr[i][2]);
                Right[R].push(arr[i][2]);
            }
            else if(arr[i][0] == L && arr[i][1] == R) {
                ans.push_back(min(ans[i-1], arr[i][2]));            // smaller check
                // cout<<"e\n";
                Left[L].push(min(ans[i-1], arr[i][2]));
                Right[R].push(min(ans[i-1], arr[i][2]));
            }
            else if(arr[i][0] == L && arr[i][1] < R) {
                int cost = arr[i][2] + Right[R].top();
                // cout<<Right[R].top()<<"f\n";
                if(cost < ans[i-1]) {
                    ans.push_back(cost);
                    Left[L].push(cost);
                    Right[R].push(cost);
                }
                else {
                    ans.push_back(ans[i-1]);
                }
            }
            else if(arr[i][0] > L && arr[i][1] > R) {
                int cost = arr[i][2] + Left[L].top();              //compulsory
                R = arr[i][1];
                // cout<<Left[L].top()<<"g\n";
                ans.push_back(cost);
                Left[L].push(cost);
                Right[R].push(cost);
            }
            else if(arr[i][0] > L && arr[i][1] == R) {
                int cost = arr[i][2] + Left[L].top();
                // cout<<Left[L].top()<<"h\n";
                if(cost < ans[i-1]) {
                    ans.push_back(cost);
                    Left[L].push(cost);
                    Right[R].push(cost);
                }
                else {
                    ans.push_back(ans[i-1]);
                }
            }
            else if(arr[i][0] > L && arr[i][1] < R) {
                ans.push_back(ans[i-1]);                            //do not consider
                // cout<<"i\n";
            }

            Left[arr[i][0]].push(arr[i][2]);
            Right[arr[i][1]].push(arr[i][2]);
        }
        for(int i=0; i<n; i++) {
            cout<<ans[i]<<"\n";
        }
    }

    return 0;
}
