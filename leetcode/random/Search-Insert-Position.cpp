#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int index=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] == target){
            index += i;
        } else {
            if(nums[i] < target && nums[i+1] > target){
                index+=i;
                index++;
            }
        }
    }

    return index;
}

int main() {
    
    vector<int> nums = {1,3,5,6};
    int target = 7;

    cout << searchInsert(nums, target);


    return 0;
}