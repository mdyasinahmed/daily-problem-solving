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

void printPrimes(long long n) {
    for(int i=2; i<=n; ++i){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    long long n;
    cin >> n;

    printPrimes(n);

    return 0;
}