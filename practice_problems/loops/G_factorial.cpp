#include<bits/stdc++.h>
using namespace std;

long long nFactorial(long long n){
    long long fact=1;
    for(long long i=1; i<=n; ++i){
        fact*=i;
    }
    return fact;
}

int main() {
    long long t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        cout << nFactorial(n) << endl;
    }

    return 0;
}