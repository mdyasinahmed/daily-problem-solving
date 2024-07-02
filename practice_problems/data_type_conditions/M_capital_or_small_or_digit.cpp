#include<bits/stdc++.h>
using namespace std;

int main() {
    char c;
    cin >> c;

    if(c>=48 && c<=(48+9)) {
        cout << "IS DIGIT" << endl;
    }
    if(c>=65 && c<=(65+26)) {
        cout << "ALPHA\nIS CAPITAL" << endl;
    }
    if(c>=97 && c<=(97+26)) {
        cout << "ALPHA\nIS SMALL" << endl;
    }


    return 0;
}