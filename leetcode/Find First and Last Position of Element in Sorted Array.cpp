// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
#include<bits/stdc++.h>
using namespace std;
 vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size();
        int low = 0 ;
        int high = size-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                ans.push_back(i);
                ans.push_back(size-1);
                return ans;
            }else if(nums[mid]>target){
                high = mid -1;
            }else {
                low = mid + 1;
            }
        }
        
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
 }
int main(){


return 0;
}