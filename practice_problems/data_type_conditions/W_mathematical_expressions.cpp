#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    char exp, equal;
    long long a, b, c;

    istringstream iss(s);
    iss >> a >> exp >> b >> equal >> c;


    switch(exp) {
        case '+':
            if(a+b == c){
                cout << "Yes" << endl;
            } else {
                cout << a+b << endl;
            }
            break;

        case '-':
            if(a-b == c){
                cout << "Yes" << endl;
            } else {
                cout << a-b << endl;
            }
            break;
        
        case '*':
            if(a*b == c){
                cout << "Yes" << endl;
            } else {
                cout << a*b << endl;
            }
            break;

        default:
            break;
    }

    return 0;
}