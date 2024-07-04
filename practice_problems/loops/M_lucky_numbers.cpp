#include <bits/stdc++.h>
using namespace std;

bool isLucky(long long n) {
    while(n>0) {
        long long d = n%10;
        if(d!=4 && d!=7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    long long a, b;
    cin >> a >> b;
    
    vector<long long> v;
    
    for(long long i=a; i<=b; ++i) {
        if(isLucky(i)) {
            v.push_back(i);
        }
    }
    
    if(v.empty()) {
        cout << "-1" << endl;
    } else {
        for(long long i=0; i<v.size(); ++i) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
