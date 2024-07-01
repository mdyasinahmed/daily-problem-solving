#include<bits/stdc++.h>
using namespace std;


int maxOperations(vector<int>& nums, int k) {
    int count = 0;
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i]+nums[j] == k){
                count++;
                nums.erase(nums.begin()+i-1);
                nums.erase(nums.begin()+j);
            }
            
        }
    }
    return count;
}


int main() {
   vector<int> nums = {1, 2, 3, 4};
    int target = 5;

//    callTheFunction(parameter1, parameter2);

   return 0;
}