#include<bits/stdc++.h>
using namespace std;


int findMaxLength(vector<int>& nums) {
    int ans = 0;
    for(int i=0; i<nums.size(); i++){
        if((nums[i]==0 && nums[i+1]==1) || (nums[i]==1 && nums[i-1]==0)){
            ans++;
        }
    }

    return ans;
}



int main() {
    vector<int> nums = {0, 1, 0};

   cout << findMaxLength(nums);

    return 0;
}