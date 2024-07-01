#include<bits/stdc++.h>
using namespace std;

long digitSum(long n){
    long r=0;
    while(n > 0){
        r += n%10; 
        n /= 10;
    }
    return r;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        long x, k;
        cin >> x >> k;

        while(digitSum(x) % k){
            ++x;
        }

        cout << x << endl;
    }


    return 0;
}
