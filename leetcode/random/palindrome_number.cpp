#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(long long int x) {
        long long int num = x;
        long long int store=0;
        while(num>0) {
            long long int last = num%10;
            store = store*10 + last;
            num=num/10;
        }

        if(store==x) {
            return true;
        }

        return false;
    }

int main() {
    long long int n;
    cin >> n;

    if(isPalindrome(n)) {
        cout << "true" << endl;
    } else {
        cout << "false";
    }

    return 0;
}