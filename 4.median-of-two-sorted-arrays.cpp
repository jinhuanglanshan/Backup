/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total = nums1.size() + nums2.size();
        if(total & 0x1){  //good way to judge odd or even
            return findKSortedArray(nums1, nums1.size(), 0, nums2, nums2.size(), 0, (total + 1) / 2);
        }
        else{
            return (findKSortedArray(nums1, nums1.size(), 0, nums2, nums2.size(), 0, total / 2) +
                    findKSortedArray(nums1, nums1.size(), 0, nums2, nums2.size(), 0, total / 2 + 1)) / 2;
        }
    }
private:
    static double findKSortedArray(vector<int>& nums1, int nums1_size, int start1, vector<int>& nums2, int nums2_size, int start2, int k){
        if(nums1_size > nums2_size){
            return findKSortedArray(nums2, nums2_size, start2, nums1, nums1_size, start1, k);  //make sure that less array should be in the top
        }
        if(nums1_size == 0){
            return nums2[start2 + k - 1];  // notice this k-1
        }
        if(k == 1){
            return min(nums1[start1], nums2[start2]);
        }

        int pa = min(k / 2, nums1_size), pb = k - pa;
        if(nums1[start1+pa-1] < nums2[start2+pb-1]){  // notice the transformation between the k biggest and the index 
            return findKSortedArray(nums1, nums1_size - pa, start1 + pa, nums2, nums2_size, start2, k - pa);
        }
        else if(nums1[start1+pa-1] > nums2[start2+pb-1]){
            return findKSortedArray(nums1, nums1_size, start1, nums2, nums2_size - pb, start2 + pb, k - pb);
        }
        else{
            return nums1[start1+pa-1];
        }
    }
};
// @lc code=end

