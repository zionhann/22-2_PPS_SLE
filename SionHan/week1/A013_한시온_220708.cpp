/**
 * @author zionhann
 * @date 2022-07-08
 * @title 136. Single Number
 * @from https://leetcode.com/problems/single-number/
 * @elapsed_time 42min
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans;
        map<int, int> m;
        
        for (int num : nums) {
            m.insert({num, 0});
        }
        
        for (int num : nums) {
            m.at(num) += 1;
        }
        
        for (auto pair : m) {
            if (pair.second == 1) {
                ans = pair.first;
            }
        }
        return ans;
    }
};