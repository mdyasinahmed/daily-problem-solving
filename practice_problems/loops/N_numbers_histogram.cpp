#include<bits/stdc++.h>
using namespace std;

void printPattern(long long n, char c){
    for(long long i=1; i<=n; ++i) {
        cout << c;
    } cout << endl;
}

int main() {
    char c;
    cin >> c;

    long long n;
    cin >> n;

    long long arr[n];
    for(long long i=0; i<n; ++i) {
        cin >> arr[i];
        printPattern(arr[i], c);
    }

    // for(long long i=0; i<n; ++i) {
    //     printPattern(arr[i]);
    // }

    return 0;
}