/**
 * @author zionhann
 * @date 2022-07-20
 * @title 88. Merge Sorted Array
 * @from https://leetcode.com/problems/merge-sorted-array/
 * @elapsed_time 10min
 * @runtime 7 ms 27.61%
 * @memory_usage 9.1 MB 29.13%
 */

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int el : nums2) {
            nums1[m++] = el;
        }
        sort(nums1.begin(), nums1.end());
    }
};