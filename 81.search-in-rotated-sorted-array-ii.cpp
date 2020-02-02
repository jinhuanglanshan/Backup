/*
 * @lc app=leetcode id=81 lang=cpp
 *
 * [81] Search in Rotated Sorted Array II
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int first = 0, last = nums.size() - 1;
        while(first <= last){
            int mid = (first + last) / 2;
            if(nums[mid] == target){
                return true;
            }
            if(nums[first] < nums[mid]){
                if(target >= nums[first] && target < nums[mid]){
                    last = mid - 1;
                }
                else{
                    first = mid + 1;
                }
            }
            else if(nums[first] == nums[mid]){
                first++;
            }
            else{
                if(target <= nums[last] && target > nums[mid]){
                    first = mid + 1;
                }
                else{
                    last = mid - 1;
                }
            }
        }
        return false;
    }
};
// @lc code=end

