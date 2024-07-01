#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int index;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==target){
            index = i;
            break;
        } else {
            index = -1;
        }
    }

    return index;
}


int main() {
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 2;


    
    cout << search(nums, target);


    return 0;
}