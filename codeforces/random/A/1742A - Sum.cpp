 #include<bits/stdc++.h>
 using namespace std;
 
 int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a+b == c) {
            cout << "yes\n";
        } else if (b+c == a) {
            cout << "yes\n";
        } else if (a+c == b) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
 
     return 0;
 }