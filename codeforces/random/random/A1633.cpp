#include<bits/stdc++.h>
using namespace std;

int solve(int n) {
    if (n % 7 == 0) {
        return n;
    }

    for(int i=0; i<10; ++i) {
        int num =((n/10)*10)+i;
        
        if(num%7==0) {
            return num;
        }
    }

    return -1;
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;

        cout << solve(n) << endl;
    }

    return 0;
}
