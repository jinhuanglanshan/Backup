/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int start = 0, end = nums.size() - 1;

//         while (start < end){
//             int mid = (start + end) / 2;
//             if(nums[mid] < nums[end]){
//                 end = mid;
//             }
//             else{
//                 start = mid + 1;
//             }
//         }
//         int bias = start;

//         start = 0, end = nums.size() - 1;
//         while (start <= end){
//             int mid = (start + end) / 2;
//             int rotated_mid = (mid + bias) % nums.size();
//             if(nums[rotated_mid] == target){
//                 return rotated_mid;
//             }
//             if(nums[rotated_mid] < target){
//                 start = mid + 1;
//             }
//             else{
//                 end = mid - 1;
//             }
//         }
//         return -1;
//     }
// };

class Solution {
public:
    int search(vector<int>& nums, int target) {  // this method based that the array would be sorted between two part
        int start = 0, end = nums.size() - 1;

        while (start <= end){
            int mid = (start + end) / 2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[start] <= nums[mid]){
                if(target >= nums[start] && target < nums[mid]){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
            else{
                if(target > nums[mid] && target <= nums[end]){  // notice > means thar start cannot be target 
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};
// @lc code=end

