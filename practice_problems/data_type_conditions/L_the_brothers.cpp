#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<string, string> p_arr[2];

    for(int i=0; i<2; ++i){
        cin >> p_arr[i].first;
        cin >> p_arr[i].second;
    }

    bool res=false;
    for(int i=0; i<2; ++i){
        if(p_arr[i].second == p_arr[i+1].second){
            res = true;
        }
    }

    if(res){
        cout << "ARE Brothers" << endl;
    } else {
        cout << "NOT" << endl;
    }

    return 0;
}