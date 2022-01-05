#include<iostream>
#include<math.h>
#include<limits.h>
#include<vector>
#include<map>
using namespace std;

long long primeFactors(int n)
{
    map<int, int> arr;
    while (n % 2 == 0 && n != 0)
    {
        arr[2]++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            arr[i]++;
            n = n/i;
        }
    }
 
    if (n > 2)
        arr[n]++;
    long long maxVal = 1, count = 0;
    for(auto i : arr) {
        if(i.second > count) {
            count = i.second;
            maxVal = i.first;
        }
    }
    return maxVal;
}
 

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        long long smallestFactor = primeFactors(n);
        cout<<smallestFactor<<"\n";
    }
    return 0;
}


// 360 = 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, 18, 20, 24, 30, 36, 40, 45, 60, 72, 90, 120, 180, 360.
// 180 = 1, 2, 3, 4, 5, 6, 9, 10, 12, 15, 18, 20, 30, 36, 45, 60, 90 and 180 = 18
// 120 = 1, 2, 3, 4, 5, 6, 8, 10, 12, 15, 20, 24, 30, 40, 60, 120 = 16
// 72  = 1, 2, 3, 4, 6, 8, 9, 12, 18, 24, 36, 72 = 12


// 200 = 2*2*2*5*5 = 1, 2, 4, 5, 8, 10, 20, 25, 40, 50, 100, 200
// 100 = 2*2*5*5 = 1, 2, 4, 5, 10, 20, 25, 50, 100 = 9
// 40 = 2*2*2*5 = 1, 2, 4, 5, 8, 10, 20, 40 = 8