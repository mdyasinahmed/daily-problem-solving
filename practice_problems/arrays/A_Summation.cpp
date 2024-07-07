#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, sum=0;
    cin >> n;
    
    vector<long long> v;
    
    for(long long i=0; i<n; ++i) {
        long long x; cin >> x;
        v.push_back(x);
        sum+=v[i];
    }
    
    // if(sum < 0) {
    //     sum*=(-1);
    // }
    cout << abs(sum)  << endl;

    return 0;
