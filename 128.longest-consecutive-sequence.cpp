/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> checked;
        for (auto i : nums){
            checked[i] = false;
        }

        int longest_length = 0;
        for (auto i : nums){
            if (checked[i]){
                continue;
            }
            checked[i] = true;
            int current_length = 1;
            for (int j = i + 1; checked.find(j) != checked.end(); j++){
                checked[j] = true;
                current_length++;
            }
            for (int j = i - 1; checked.find(j) != checked.end(); j--){
                checked[j] = true;
                current_length++;
            }
            longest_length = max(longest_length, current_length);
        }
        return longest_length;
    }
};
// @lc code=end

