#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> v_pairs(n);
    bool ans = false;

    for(int i=0; i<n;++i) {
        int a, b;
        cin >> a >> b;
        v_pairs[i] = {a,b};
    }
    
    sort(v_pairs.begin(), v_pairs.end());
    
    // for(int i=0; i<n;++i) {
    //     cout << v_pairs[i].first << " " << v_pairs[i].second <<endl;
    // }

    for(int i=0; i<n-1; ++i) {
        if(v_pairs[i].first < v_pairs[i + 1].first && v_pairs[i].second > v_pairs[i+1].second) {
            ans = true;
            break;
        }
    }
    
    if(ans){
        cout << "Happy Alex" << endl;
    } else{
        cout << "Poor Alex" << endl;
    }
    
    
    return 0;
}