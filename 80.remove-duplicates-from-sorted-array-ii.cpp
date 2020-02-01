/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return 0;
        int occur = 1;
        int index = 0;
        for (int i = 1; i < n; i++){
            if(nums[index] == nums[i]){
                if(occur < 2){
                    nums[++index] = nums[i]; //the two same number should be moved together
                    occur++;
                }
            }
            else{
                nums[++index] = nums[i];
                occur = 1;
            }
        }
        return index + 1;
    }
};
// @lc code=end

