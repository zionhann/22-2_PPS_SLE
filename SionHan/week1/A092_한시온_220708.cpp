/**
 * @author zionhann
 * @date 2022-07-08
 * @title 922. Sort Array By Parity II
 * @from https://leetcode.com/problems/sort-array-by-parity-ii/
 * @elapsed_time 43min
 */

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> result(nums.size());
        auto even = result.begin();
        auto odd = next(even);
        
        for (int num : nums) {
            if (isEven(num)) {
                *even = num;
                even += 2;
            } else {
                *odd = num;
                odd += 2;
            }
        }
        return result;
    }
    bool isEven(int n) {
        return n % 2 == 0;
    }
};