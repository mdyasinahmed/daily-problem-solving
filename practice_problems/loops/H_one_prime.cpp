#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
    for(long long i=2; i<=n/2; ++i) {
        if(n%i == 0){
            return false;
        }
    }

    return true;
}

int main() {
    long long a;
    cin >> a;

    if(isPrime(a)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}