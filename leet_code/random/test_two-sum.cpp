#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    for(int i=0; i<nums.size(); i++) {
        if(nums[i]==nums[i+1]){
            nums.erase(nums.begin()+i);
        }
    }
}

int main() {

    vector<int> nums = {-6,2,5,-2,-7,-1,3};


    
    cout << removeDuplicates(nums);


}
