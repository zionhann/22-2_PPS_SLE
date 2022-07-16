/**
 * @author zionhann
 * @date 2022-07-16
 * @title 27. Remove Element
 * @from https://leetcode.com/problems/remove-element/
 * @elapsed_time 17min
 * @runtime 0 ms (100.00%)
 * @memory_usage 8.6 MB (99.70%)
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        
        for (auto iter = nums.begin(); iter != nums.end();) {
            if (*iter == val) {
                iter = nums.erase(iter);
            } else {
                iter = next(iter);
                k += 1;
            }
        }
        return k;
    }
};