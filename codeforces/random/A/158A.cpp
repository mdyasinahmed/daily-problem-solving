#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, ans = 0;
    cin >> a >> b;

    int arr[a];
    for(int i=0; i<a; i++) {
        cin >> arr[i];
    }
    
    for(int i=0; i<a; i++) {
        if(arr[i] >= arr[b-1] && arr[i]) {
            ans++;
        }
    }

    cout << ans;

    return 0;
}