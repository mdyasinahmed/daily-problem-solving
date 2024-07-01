#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(1*a == c) {
        cout << "Yes" << endl;
    } else {
        if(a*1 + b*2 == c || a*1 + b*1 == c) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }


    return 0;
}