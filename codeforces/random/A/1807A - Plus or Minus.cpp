#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
 
        if(a+b==c) {
            cout << '+' << endl;
        } else {
            cout << '-' << endl;
        }
    }
 
 
    return 0;
}

// https://codeforces.com/contest/1807/problem/A
// Codeforces 1807A - A Plus or Minus