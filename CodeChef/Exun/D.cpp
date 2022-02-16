#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        vector<vector<int> > graph(n);
        vector<int> t(m+1, 0);
        for(int i=0; i<n-1; i++) {
            int u,v;
            cin>>u>>v;
            graph[u-1].push_back(v-1);
            graph[v-1].push_back(u-1);
        }
        for(int i=0; i<m; i++) {
            cin>>t[i+1];
        }
        sort(t.begin(), t.end());
        vector<int> diff;

        for(int i=1; i<=m; i++) {
            diff.push_back(t[i] - t[i-1]);
        }

        int root = 0;
        vector<bool> visited(n, false);
        queue<int> q;
        q.push(root);
        vector<int> depth(n, 0);
        int d=1;
        while(!q.empty()) {
            int size = q.size();
            for(int l=0; l<size; l++) {
                int cur = q.front();
                q.pop();
                visited[cur] = true;
                int count = 0;
                for(int i=0; i<graph[cur].size(); i++) {
                    int next = graph[cur][i];
                    if(!visited[next]) {
                        q.push(next);
                        count++;
                    }
                }
                if(count == 0) {
                    depth[d] = depth[d] + 1;
                }
            }
            d++;
        }
        sort(diff.rbegin(), diff.rend());

        int ans = 0;
        for(int i=1; i<depth.size(); i++) {
            if(depth[i] == 0)
                continue;
            
            int index = 0;
            while(diff[index] >= i) {
                ans += depth[i]*(diff[index] - i + 1);
                index++;
            }
        }
        cout<<ans<<"\n";
    }
}