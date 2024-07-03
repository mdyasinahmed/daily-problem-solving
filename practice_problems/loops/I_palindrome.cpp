#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(long long n) {
    long long value = n, store=0;

        while(n != 0) {
            store = (store*10)+(n%10);
            n/=10;
        }

        if(value != store) return false;

    return true;
}

int main() {
    long long n;
    cin >> n;

    if(isPalindrome(n)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}