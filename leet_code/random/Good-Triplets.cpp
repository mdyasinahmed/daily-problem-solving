#include<bits/stdc++.h>
using namespace std;


int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
    int ans = 0;
    for(int i=0; i<arr.size(); i++) {
        for(int j=i+1; j<arr.size(); j++) {
            for(int k=j+1; k<arr.size(); k++) {
                if(abs(arr[i]-arr[j])<=a && abs(arr[j]-arr[k])<=b && abs(arr[i]-arr[k])<=c){
                    ans++;
                }
            }
        }
    }

    return abs(ans);
}


int main() {
    vector<int> arr = {1,1,2,2,3};
    int a = 0, b = 0, c = 1;

    cout << countGoodTriplets(arr, a, b, c) << endl;


    return 0;
}