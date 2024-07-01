#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long arr[100][100];

    for(long long i=1; i<=1; ++i){
        for(long long j=1; j<=n; ++j){
            arr[i][j] = 1;
        }
    }
    for(long long i=2; i<=n; ++i){
        arr[i][1]=1;
        for(long long j=2; j<=n; ++j){
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }
    cout << arr[n][n] << endl;
}