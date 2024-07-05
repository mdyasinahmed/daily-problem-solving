#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while(t--) {
        vector<long long> v;
        long long n;
        cin >> n;
        while(n>0) {
            long long d = n%10;
            v.push_back(d);
            n/=10;
        }

        for(long long i=0; i<v.size(); ++i) {
            cout << v[i] << " ";
        } cout << endl;
        v.clear();
    }

    return 0;
}