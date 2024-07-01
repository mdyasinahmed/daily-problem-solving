#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    while(n--) {
        string s;
        cin >> s;
        if(s == "++X") {
            ++count;
        } else if(s == "--X") {
            --count;
        } else if(s == "X++") {
            count++;
        } else {
            count--;
        }
        //cout << count;
    }
    cout << count;
}


// https://codeforces.com/problemset/problem/282/A
// codeforces 282A - Bits++ solution