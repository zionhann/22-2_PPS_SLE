/**
 * @author zionhann
 * @date 2022-07-18
 * @title 26. Remove Duplicates from Sorted Array
 * @from https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 * @elapsed_time 6min
 * @runtime 557 ms (7.17%)
 * @memory_usage 18.4 MB (36.66%)
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (auto iter = nums.begin(); next(iter) != nums.end();) {
            if (*iter == *next(iter)) {
                iter = nums.erase(iter);
            } else {
                iter += 1;
            }
        }
        return nums.size();
    }
};