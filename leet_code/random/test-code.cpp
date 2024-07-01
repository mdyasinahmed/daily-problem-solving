#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> digits = {1, 2, 3};
    long long int store=0;;
        for(int i=0; i<digits.size(); i++){
            store+=digits[i];
            if(i==digits.size()-1) {
                store+=1;
                break;
            } else {
                store*=10;
            }  
        }
        cout<< store << endl;

        // int n = digits.size();
        // vector<int> v[n];

        // while(store>0) {
        //     long long int last = store%10;
        //     v->push_back(last);
        //     store/=10;
        // }

        // for(int i=0; i<n; i++) {
        //     cout << v << " ";
        // } cout << endl ;

        string numStr = to_string(store);
        cout << numStr;
        vector<int> nums;

        for(char ch : numStr){
            if(ch >= '0' && ch <= '9') {
                nums.push_back(ch-'0');
            }
            
        }

        for(int i=0; i<nums.size(); i++) {
            cout << nums[i] << " ";
        } cout << endl;


    return 0;
}