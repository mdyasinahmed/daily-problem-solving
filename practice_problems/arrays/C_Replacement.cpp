#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    vector<long long> v;
    
    for(long long i=0; i<n; ++i) {
        long long x; cin >> x;
        v.push_back(x);
        if(v[i] > 0) {
            v[i] = 1;
        }
        if(v[i] < 0) {
            v[i] = 2;
        }
    }
    
    for(long long i=0; i<v.size(); ++i) {
        cout << v[i] << " ";
    } cout << endl;

    return 0;
}