#include<bits/stdc++.h>
using namespace std;


// bool getOddDiv(long long n) {
//     for (long long i=3; i<= sqrt(n); i+=2) {
//         if(n%i==0) {
//             return true;
//         }
//         if (i != n / i) {
//             return true;
//         }
//     }

//     return false; 
// }

// void oddDiv() {
//     long long n, count = 0; cin >> n;
//     // bool isOddDiv = false;

//     for(long long i=2; i<=sqrt(n); ++i) {
//         if(n%i == 0) {
//             if(i%2 != 0) {
//                 count++;
//             }
//         }
//     }

//     if(count>0) {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
// }

int main() {
    long long t, n;
    cin >> t;

    while(t--){
        cin >> n;

        if(n&1){
            cout<<"YES"<<endl;
        } else{
            bool ifGot = false;
            long long d = n;
            while(d>2){
                d/=2;
                if(d&1){
                    if(n%d == 0){
                        ifGot = true;
                        break;
                    }
                }
            }
            if(ifGot){
                cout<<"YES"<<endl;
            } else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}