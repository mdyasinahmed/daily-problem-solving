#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    char c;
    long long a, b;

    istringstream ss(s);
    ss >> a >> c >> b;

    switch (c) {
        case '+':
            cout << a+b << endl;
            break;
        case '-':
            cout << a-b << endl;
            break;
        case '*':
            cout << a*b << endl;
            break;
        case '/':
            cout << a/b << endl;
            break;
        default:
            break;
    }

    return 0;
}