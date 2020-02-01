/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // if(nums.size() == 0)
        //     return 0;
        // int index = 0;
        // for (int i = 0; i < nums.size(); i++){
        //     if(nums[index] != nums[i]){
        //         nums[++index] = nums[i];
        //     }
        // }
        // return index + 1;
        return distance(nums.begin(), unique(nums.begin(), nums.begin() + nums.size()));
    }
};
// @lc code=end

