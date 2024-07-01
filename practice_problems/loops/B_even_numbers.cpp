#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, count=0;
    cin >> n;

    for(long long i=2; i<=n; i+=2) {
        cout << i << endl;
        count++;
    }

    if(count == 0) {
        cout << -1 << endl;
    }

    return 0;
}