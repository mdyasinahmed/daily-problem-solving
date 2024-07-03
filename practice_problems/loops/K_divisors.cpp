#include<bits/stdc++.h>
using namespace std;

void printDivisors(long long n) {
    for(long long i=1; i<=n; ++i) {
        if(n%i == 0){
            cout << i << endl;
        }
    }
}

int main() {
    long long n;
    cin >> n;

    printDivisors(n);

    return 0;
}