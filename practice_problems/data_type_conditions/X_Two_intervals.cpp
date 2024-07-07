#include<bits/stdc++.h>
using namespace std;

int main() {
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    long long store1=0, store2=0;
    
    if(l1 < l2) {
        store1 = l2;
        if(r1 > r2) {
            store2 = r1;
        } cout << store1 << " " << store2 << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
