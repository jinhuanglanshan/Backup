/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        if(nums.size() < 3){
            return result;
        }
        sort(nums.begin(), nums.end());
        const int target_sum = 0;
        auto last = nums.end();
        for (auto a = nums.begin(); a < prev(last, 2); a = upper_bound(a, prev(last, 2), *a)){
            for (auto b = next(a); b < prev(last); b = upper_bound(b, prev(last), *b)){
                const int c = target_sum - *a - *b;
                if(binary_search(next(b), last, c)){
                    result.push_back(vector<int>{*a, *b, c});
                }
            }
        }
        return result;
    }
};
// @lc code=end

