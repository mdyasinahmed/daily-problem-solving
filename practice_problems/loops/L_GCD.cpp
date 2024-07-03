#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long num = a;
    if(a>b) num = b;

    for(long long i=num; i>0; --i){
        if(a%i==0 && b%i==0){
            cout << i << endl;
            break;
        }
    }


    return 0;
}