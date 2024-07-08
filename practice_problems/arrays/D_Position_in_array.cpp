#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    vector<long long> v;
    
    for(long long i=0; i<n; ++i) {
        long long x; cin >> x;
        v.push_back(x);
        if(v[i] <= 10) {
            cout << "A[" << i << "]" << " = " << v[i] << endl;
        }
    }


    return 0;
}