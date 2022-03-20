#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <limits.h>

#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n, 0);

        int uniqueCount = 0;
        map<int, int> elemCount;
        for(int i=0; i<n; i++) {
            cin>>arr[i];

            if(!elemCount[arr[i]])
                uniqueCount++;
            elemCount[arr[i]]++;
        }

        for(int i=0; i<uniqueCount; i++) {
            cout<<uniqueCount<<" ";
        }
        int left = n-uniqueCount;
        for(int i=0; i<left; i++) {
            cout<<++uniqueCount<<" ";
        }
        cout<<"\n";
        
    }
}

// 1 1 2 2 3 3 4 4          / 4
// 1 1, 2 2 3 3 4 4         / 4
// 1 1, 2 2, 3 3 4 4        / 4
// 1 1, 2 2, 3 3, 4 4       / 4
// 1, 1, 2 2, 3 3, 4 4      / 5