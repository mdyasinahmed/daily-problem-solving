#include<bits/stdc++.h>
using namespace std;


int main() {
    long long t;
    cin >> t;

    long long n, count=0;
    while(t--) {
        cin >> n;
        int count = 0;
        while(n != 1) {
            if(n%6 == 0) {
                n/=6;
            } else if(n%3 == 0) {
                n*=2;
            } else {
                count = -1;
                break;
            }
            count++;
        }
        cout << count << endl;
    }

    return 0;
}