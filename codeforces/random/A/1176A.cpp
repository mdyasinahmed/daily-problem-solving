#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, cnt;
    long long int n;
    cin >> t;

    while(t--) {
        cin >> n;
        cnt = 0;

        while(n > 1){ 
            if(n%2 == 0) {
                n/=2;
            }
            else if(n%3 == 0) {
                n /= 3;
                n *= 2;
            }
            else if(n%5 == 0) {
                n /= 5;
                n *= 4;
            }
            else {
                cnt = -1;
                break;
            }

            cnt++;
        }
        
        cout << cnt << endl;  
    }

    return 0;
}