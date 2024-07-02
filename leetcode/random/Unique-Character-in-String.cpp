#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
    
    for(int i=0; i<s.length(); i++){
        int count = 0;
        for(int j=i+1; j<s.length(); j++){
            if(i!=j && s[i] == s[j]){
                count++;
                break;
            }
        }
        if(count==1) {
            return i;
        }
    }

    return -1;
}


int main() {
    string str = "loveleetcode";

    cout << firstUniqChar(str);


    return 0;
}