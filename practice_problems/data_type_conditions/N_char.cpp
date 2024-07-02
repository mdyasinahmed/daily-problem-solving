#include<bits/stdc++.h>
using namespace std;

int main() {
    char c;
    cin >> c;

    char getChar;

    if(islower(c)){
        getChar = toupper(c);
        cout << getChar << endl;
    } else {
        getChar = tolower(c);
        cout << getChar << endl;
    }

    return 0;
}