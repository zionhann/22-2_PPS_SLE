/**
 * @author zionhann
 * @date 2022-07-09
 * @title 191. Number of 1 Bits
 * @from https://leetcode.com/problems/number-of-1-bits/
 * @elapsed_time 19min
 */

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        uint32_t one = 1;
        
        while (one != 0) {
            if (n & one) {
                ans += 1;
            }
            one = one << 1;
        }
        return ans;
    }
};