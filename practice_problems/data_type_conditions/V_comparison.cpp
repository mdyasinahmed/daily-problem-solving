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
        case '=':
            if(a == b){
                cout << "Right" << endl;
            } else {
                cout << "Wrong" << endl;
            }
            break;
            
       case '<':
            if(a < b){
                cout << "Right" << endl;
            } else {
                cout << "Wrong" << endl;
            }
            break;

       case '>':
            if(a > b){
                cout << "Right" << endl;
            } else {
                cout << "Wrong" << endl;
            }
            break;

        default:
            break;
    }


    return 0;
}