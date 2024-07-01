#include<bits/stdc++.h>
using namespace std;

/*
int sumOfUnique(vector<int>& nums) {
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i] == nums[j]) {
                nums[i]= nums[j] = -1;
            }
        }
    }

    int sum=0;
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] > 0) {
            sum += nums[i];
        }
    }

    return sum;
}
*/



int sumOfUnique(vector<int>& nums) {
    int index = 0;
    while(index < nums.size()) {
        for(int j=index+1; j<=nums.size(); j++) {
            if(nums[index] == nums[j]){
                nums[index] = nums[j] = -1;
            }
        }
        index++;
    }

    int sum=0;
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] > 0) {
            sum += nums[i];
        }
    }

    return sum;
}


int main() {
    vector<int> nums = {1, 1, 1, 1, 1};
    // vector<int> nums = {1,2,3,4,5};

    

    cout << sumOfUnique(nums) << endl;
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    } cout << endl;


    return 0;
}