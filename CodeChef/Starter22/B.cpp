#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    vector<vector<long long> > values(4, vector<long long>(2, 0));
    unordered_set<long long> st;
    values[1][0] = 1;
    values[1][1] = 1;
    values[2][0] = 2;
    values[2][1] = 1;
    values[3][0] = 3;

    st.insert(0);
    st.insert(3);
    vector<vector<long long> > add(4, vector<long long>(2, 0));
    add[1][0] = 1;
    add[1][1] = 1;
    add[2][0] = 2;
    add[2][1] = 1;
    add[3][0] = 3;

    int index = 0;
    while(st.size() < 1000) {
        int value = values[index][0];
        int count = values[index][1];
        for(int i=0; i<add.size(); i++) {
            int temp = value*4 + add[i][0];
            int tc = (add[i][1]+count)%2;
            if(tc == 0 && (st.find(temp) == st.end())) {
                vector<long long> t;
                t.push_back(temp);
                t.push_back(tc);
                values.push_back(t);
                st.insert(temp);
            }
        }
        index++;
    }

    sort(values.begin(), values.end());
    while(t--) {
        int n;
        cin>>n;
        int index = 0;
        while(n--) {
            while(values[index][1] == 1) {
                index++;
            }
            cout<<values[index][0]<<" ";
            index++;
        }
        cout<<"\n";
    }

}
// 00 01 10 11
// 00 0
// 01 1
// 10 2
// 11 3
// 0100 4
// 0101 5
// 0110 6
// 1001 9
// 1010 10
// 1100 12
// 1111 15
// 010001
// 010010
// 010100
// 011000
// 


// 0 =  000000  000000
// 3 =  000011  000011
// 5 =  000101  000110
// 6 =  000110  000000
// 9 =  001001  001001
// 10 = 001010  000011
// 12 = 001100  001111
// 15 = 001111  000000
// 17 = 010001  010001
// 18 = 010010  000011
// 20 = 010100  010111
// 24 = 011000  001111
// 33 = 100001  101110
// 34 = 100010  001100
// 36 = 100100  101000
// 40 = 101000  000000
// 48 = 110000  110000
// 63 = 111111  001111