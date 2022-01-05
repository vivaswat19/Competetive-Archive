#include<iostream>
#include<vector>
using namespace std;

struct Node {
    int color;
    Node* left;
    Node* right;
};

int main() {
    int n,k;
    cin>>n>>k;

    vector<vector<int>> tree(n, vector<int>());

    for(int i=0; i<n-1; i++) {
        int x,y;
        cin>>x>>y;
        tree[min(x,y)].push_back(max(x,y));
    }
    return 0;
}