#include<bits/stdc++.h>
using namespace std;

long long getPalindrome(long long n) {
    long long value = n, store=0;

        while(n != 0) {
            store = (store*10)+(n%10);
            n/=10;
        }

    return store;
}

int main() {
    long long n;
    cin >> n;

    if(getPalindrome(n) == n){
        cout << getPalindrome(n) << endl;
        cout << "YES" << endl;
    } else {
        cout << getPalindrome(n) << endl;
        cout << "NO" << endl;
    }

    return 0;
}