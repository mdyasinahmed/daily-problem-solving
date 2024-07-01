#include<bits/stdc++.h>
using namespace std;

int countPairs(vector<int>& nums, int target) {
    int Pairs = 0;
    for(int i=0; i<nums.size(); i++) {
        for(int j=i+1; j<nums.size(); j++) {
            if(nums.at(i)+nums.at(j) < target){
                Pairs++;
            }
        }   
    } 
    return Pairs;   
}



int main() {
    
    // vector<int> nums = {-1,1,2,3,1}, target = 2;

    vector<int> nums = {-6,2,5,-2,-7,-1,3};
    int target = -2;


    
    cout << countPairs(nums, target);

    return 0;
}