#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if(a>b) {
        a=a+1;
        if(a%b==0) {
            cout << 0;
        } else{
            cout << a%b;
        }
    } else {
        b=b+1;
        if(b%a!=0) {
            cout << 0;
        } else{
            cout << b%a;
        }
    }

    return 0;
}