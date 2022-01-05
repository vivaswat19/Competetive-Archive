#include<iostream>
#include<vector>
#include<map>
#include<unordered_set>

using namespace std;

bool check(vector<vector<int> > board, int x, int y, unordered_set<int> rows, unordered_set<int> cols) {
    if(board[x][y] == 0) {
        if(rows.find(x) == rows.end() && rows.find(x+1) == rows.end() && cols.find(y) == cols.end() && cols.find(y+1) == cols.end())
            return true;
    }

    return false;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        if(k > n) {
            cout<<-1<<"\n";
            continue;
        }
        vector<vector<int> > board(n, vector<int>(n, 0));
        // rook cells = 2
        unordered_set<int> rows, cols;
        int rookCount = 0;
        bool flag = false;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(check(board, i, j, rows, cols)) {
                    board[i][j] = 2;
                    rows.insert(i);
                    rows.insert(i+1);
                    rows.insert(i-1);
                    cols.insert(j);
                    cols.insert(j+1);
                    cols.insert(j-1);
                    rookCount++;
                    if(rookCount == k) {
                        flag = true;
                        break;
                    }
                }
            }
            if(flag)
                break;
        }

        if(!flag) {
            cout<<"-1\n";
            // cout<<"test\n";
            // for(int i=0; i<n; i++) {
            //     for(int j=0; j<n; j++) {
            //         if(board[i][j] == 0)
            //             cout<<".";
            //         else if(board[i][j] == 2)
            //             cout<<"R";
            //     }
            //     cout<<"\n";
            // }
            // cout<<"test end\n";

        } 
        else {
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    if(board[i][j] == 0)
                        cout<<".";
                    else if(board[i][j] == 2)
                        cout<<"R";
                }
                cout<<"\n";
            }
        }
    }
    return 0;
}