/**
 * @author zionhann
 * @date 2022-07-21
 * @title 66. Plus One
 * @from https://leetcode.com/problems/plus-one/
 * @elapsed_time 28min
 * @runtime 4 ms 43.62%
 * @memory_usage 8.7 MB 85.58%
 */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        
        digits.back() += 1;
        
        for (auto iter = digits.rbegin(); iter != digits.rend()-1; ++iter) {
            if (*iter == 10) {
                *iter = 0;
                *next(iter) += 1;
            }
        }
        
        if (digits.front() == 10) {
            digits.front() = 0;
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};