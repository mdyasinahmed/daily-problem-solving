#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
using ll = long long;

void solve(){
    int x1, y1;
    cin >> x1 >> y1;

    int x2, y2;
    cin >> x2 >> y2;


    if((y1>x1 && y2<x2 )||( y1<x1 && y2>x2)) cout << "N0";
    else{
        cout << "YES";
    }
    cout << endl;
}

int  main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
}