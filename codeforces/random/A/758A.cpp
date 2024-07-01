#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int high = arr[n-1], sum = 0;

    for(int i=0; i < n-1; i++) {
        if(arr[i] < high) {
            int need = high - arr[i];
            sum += need;
        } 
    }

    cout << sum << endl;

    return 0;
}