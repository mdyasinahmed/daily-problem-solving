#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b, lead1 = 0, lead2 = 0, mx = max(lead1, lead2);
        cin >> a >> b;

        if(a>b){
            int player = 1;
            lead1 = a-b;
            if(lead1>max){
                max = lead1;
            }
        }
    }

    return 0;
}