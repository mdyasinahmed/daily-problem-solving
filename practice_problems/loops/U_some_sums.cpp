#include<bits/stdc++.h>
using namespace std;

long long getDigit(long long n) {
    while(n>0) {
        long long d = n%10;
        return d;
        n /= 10;
    }
}

int main() {
    long long n, a, b;
    cin >> n >> a >> b;

    long long sum=0;
    for(long long i=1; i<=n; ++i) {
        long long digitSum=0;
        long long digit = getDigit(i);
        

    } cout << endl;

    cout << sum << endl;

    return 0;
}