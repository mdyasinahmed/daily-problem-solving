#include<bits/stdc++.h>
using namespace std;

int countKDifference(vector<int>& nums, int k) {
    int Pairs = 0;
    for(int i=0; i<nums.size(); i++) {
        for(int j=i+1; j<nums.size(); j++) {
            if(abs(nums.at(i)-nums.at(j)) == k){
                Pairs++;
            }
        }   
    } 
    return abs(Pairs);
}



int main() {
    
    // vector<int> nums = {-1,1,2,3,1}, k = 2;

    vector<int> nums = {3,2,1,5,4};
    int k = 2;


    
    cout << countKDifference(nums, k);

    return 0;
}